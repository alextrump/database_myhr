CREATE OR REPLACE FUNCTION "kurylenko".fire_staff
    (IN id_staff integer, IN fire_date VARCHAR)
RETURNS void AS
$BODY$
DECLARE
    date_start date;
BEGIN

    --check whether this staff exists
    IF NOT EXISTS
          (SELECT *
           FROM "kurylenko".staff
           WHERE "Id_staff" = id_staff)
       THEN RAISE EXCEPTION 'Співробітник не існує.';
    END IF;

    SELECT staffDoc.date_in INTO date_start 
    FROM (
        SELECT date_in
        FROM "kurylenko".staff
        WHERE "Id_staff" = id_staff AND date_out IS NULL --as our workers can only take one position at the moment
    ) AS staffDoc;
    
    --check the date
    IF date_start > to_date(fire_date, 'YYYY-MM-DD')
        THEN RAISE EXCEPTION 'Неможливо звільнити працівника з посади до початку роботи на цій посаді.';
    END IF;

    --fire staff
    UPDATE "kurylenko".staff
    SET date_out = to_date(fire_date, 'YYYY-MM-DD')
    WHERE "Id_staff" = id_staff AND date_out IS NULL; --as our workers can only take one position at the moment

END;
$BODY$
LANGUAGE plpgsql VOLATILE;
