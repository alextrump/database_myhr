CREATE OR REPLACE FUNCTION "kurylenko".delete_position
    (IN id_position integer)
RETURNS void AS
$BODY$
DECLARE
    staff_count_by_position integer;
    opened_vac_count_by_posit integer;
    iterator integer;
BEGIN

    SELECT count(*) INTO staff_count_by_position
    FROM "kurylenko".staff staff
    JOIN "kurylenko".vacancies vacancies
      ON staff."Id_vacancy" = vacancies."Id_vacancy"
    WHERE
      staff.date_out IS NOT NULL AND vacancies."Id_position" = id_position;
    
    --we cannot delete position if at least 1 person works there
    IF staff_count_by_position > 0
        THEN RAISE EXCEPTION 'Неможливо видалити посаду. Принаймі одна особа працює на ній.';
    END IF;

    --delete open vacancies for the selected position; they are all opened, as we have checked that nobody takes them before
    SELECT SUM(type) INTO opened_vac_count_by_posit
        FROM "kurylenko".vacancies
        WHERE "Id_position" = id_position;
    SELECT 0 INTO iterator;
    WHILE iterator < opened_vac_count_by_posit
        LOOP
            iterator := iterator + 1;
            SELECT "kurylenko".delete_last_vacancy(id_position, current_date);
        END LOOP;

    --close the position
    UPDATE "kurylenko".positions
        SET exists = FALSE
        WHERE "Id_position" = id_position;

END;
$BODY$
LANGUAGE plpgsql;
