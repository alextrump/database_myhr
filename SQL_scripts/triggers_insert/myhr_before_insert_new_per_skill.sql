CREATE OR REPLACE FUNCTION "kurylenko".insert_new_per_skill()
RETURNS trigger AS
$BODY$
BEGIN

IF EXISTS(
    SELECT "Id_per_skils"
        FROM "kurylenko".personal_skills
        WHERE
            "Id_person" = NEW."Id_person" AND
            "Id_skill" = NEW."Id_skill"
        )
THEN RAISE EXCEPTION 'Персональна навичка вже існує.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER insert_new_per_skill
BEFORE INSERT
ON "kurylenko".personal_skills
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".insert_new_per_skill();
