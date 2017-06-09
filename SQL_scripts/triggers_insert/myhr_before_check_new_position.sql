CREATE OR REPLACE FUNCTION "kurylenko".check_new_position()
RETURNS trigger AS
$BODY$
BEGIN

IF char_length(NEW.posit_name) = 0
THEN
RAISE EXCEPTION 'Назва посади не може бути довжини 0.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER check_new_position
BEFORE INSERT
ON "kurylenko".positions
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".check_new_position();
