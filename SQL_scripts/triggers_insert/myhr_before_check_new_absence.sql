CREATE OR REPLACE FUNCTION "kurylenko".check_new_absence()
RETURNS trigger AS
$BODY$
BEGIN

IF NEW.date_in > NEW.date_out
THEN
RAISE EXCEPTION 'Неправильні дати.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER check_new_absence
BEFORE INSERT
ON "kurylenko".absences
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".check_new_absence();
