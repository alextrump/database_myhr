CREATE OR REPLACE FUNCTION "kurylenko".check_new_abs_type()
RETURNS trigger AS
$BODY$
BEGIN

IF char_length(NEW.abs_name) = 0
THEN
RAISE EXCEPTION 'Назва відсутності не може бути довжини 0.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER check_new_abs_type
BEFORE INSERT
ON "kurylenko".absence_type
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".check_new_abs_type();
