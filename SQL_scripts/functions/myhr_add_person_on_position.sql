CREATE OR REPLACE FUNCTION "kurylenko".add_person_on_position
    (IN id_person integer, IN id_position integer, IN startDate VARCHAR)
RETURNS void AS
$BODY$
DECLARE
    opened_vac_by_position integer;
    position_exists boolean;
    new_vac_id integer;
    last_fired date;
BEGIN
    --check whether this person is currently working. if yes - we do not allow him/her to take 2> positions at one time
    IF EXISTS (
        SELECT "Id_staff"
        FROM "kurylenko".staff
        WHERE
            "Id_person" = id_person AND
            (date_out IS NULL OR
            date_out > to_date(startDate, 'YYYY-MM-DD'))
    ) THEN RAISE EXCEPTION 'Особа вже працює.';
    END IF;

    --check whether this position exists
    IF NOT EXISTS
        (SELECT *
            FROM "kurylenko".positions
            WHERE
                "Id_position" = id_position AND
                exists = TRUE)
        THEN RAISE EXCEPTION 'Посада не існує';
    END IF;

    --check whether there is a vacancy for the chosen position
    SELECT sum(type) INTO opened_vac_by_position
        FROM "kurylenko".vacancies
        WHERE "Id_position" = id_position
        GROUP BY "Id_position";
    IF opened_vac_by_position <= 0
        THEN RAISE EXCEPTION 'Жодних вакансій для даної позиції.';
    END IF;

    --add this person on the chosen position
    SELECT nextval('"kurylenko".inc_primary'::regclass) INTO new_vac_id;
    INSERT INTO "kurylenko".vacancies ("Id_vacancy", type, date_in, "Id_position")
        VALUES (new_vac_id, -1, to_date(startDate, 'YYYY-MM-DD'), id_position);

    INSERT INTO "kurylenko".staff ("Id_person", "Id_vacancy", date_in)
        VALUES (id_person, new_vac_id, to_date(startDate, 'YYYY-MM-DD'));
END;
$BODY$
LANGUAGE plpgsql;
