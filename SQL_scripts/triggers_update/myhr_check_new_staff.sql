CREATE OR REPLACE FUNCTION "kurylenko".check_new_staff()
RETURNS trigger AS
$BODY$
BEGIN

IF
    NEW.date_out IS NOT NULL AND
    OLD.date_in > NEW.date_out
THEN RAISE EXCEPTION 'Дата початку роботи не може бути пізніше дати закінчення роботи.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;




CREATE TRIGGER check_new_staff
BEFORE UPDATE
ON "kurylenko".staff
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".check_new_staff();
