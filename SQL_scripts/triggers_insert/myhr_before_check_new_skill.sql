CREATE OR REPLACE FUNCTION "kurylenko".check_new_skill()
RETURNS trigger AS
$BODY$
BEGIN

IF char_length(NEW.skill_name) = 0
THEN
RAISE EXCEPTION 'Назва навички не може бути довжини 0.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER check_new_skill
BEFORE INSERT
ON "kurylenko".skills
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".check_new_skill();
