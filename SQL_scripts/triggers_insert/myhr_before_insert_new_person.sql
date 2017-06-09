CREATE OR REPLACE FUNCTION "kurylenko".insert_new_person()
RETURNS trigger AS
$BODY$
BEGIN

IF char_length(NEW.per_name) = 0 OR
    char_length(NEW.per_surname) = 0 OR
    char_length(NEW.education) = 0 OR
    EXTRACT(YEAR from AGE(NEW.birthday)) < 18
THEN
RAISE EXCEPTION 'Неправильні персональні дані.';
END IF;
RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER insert_new_person
BEFORE INSERT
ON "kurylenko".person
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".insert_new_person();
