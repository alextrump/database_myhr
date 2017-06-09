CREATE OR REPLACE FUNCTION "kurylenko".delete_last_vacancy
    (IN id_position integer, IN proc_date VARCHAR)
RETURNS void AS
$BODY$
DECLARE
    opened_vac_count_by_position integer;
    last_date date;
BEGIN

    SELECT SUM(type) INTO opened_vac_count_by_position
        FROM "kurylenko".vacancies
        WHERE "Id_position" = id_position;
   
    --check whether there are such vacancies 
    IF opened_vac_count_by_position = 0
        THEN RAISE EXCEPTION 'Таких вакансій немає.';
    END IF;

    --choose the last date (delete LAST vacancy opened))
    SELECT min(date_in) INTO last_date
        FROM (
             SELECT * FROM "kurylenko".vacancies
	     WHERE type = 1 AND "Id_position" = id_position
	     ORDER BY date_in DESC
	     LIMIT opened_vac_count_by_position ) as open_vacancies;
    
    --check the date again
    IF last_date > to_date(proc_date, 'YYYY-MM-DD')
        THEN RAISE EXCEPTION 'Невірна дата.';
    END IF;

    --close the chosen vacancy
    INSERT INTO "kurylenko".vacancies (type, date_out, "Id_position")
        VALUES (-1, to_date(proc_date, 'YYYY-MM-DD'), id_position);

END;
$BODY$
LANGUAGE plpgsql;
