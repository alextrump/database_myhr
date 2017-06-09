CREATE OR REPLACE FUNCTION "kurylenko".insert_new_nec_skill()
RETURNS trigger AS
$BODY$
BEGIN

IF EXISTS(
    SELECT "Id_nec_skill"
        FROM "kurylenko".necessary_skills
        WHERE
            "Id_skill" = NEW."Id_skill" AND
            "Id_position" = NEW."Id_position"
        )
THEN RAISE EXCEPTION 'Необхідна навичка вже існує.';
END IF;

RETURN NEW;
END;
$BODY$
LANGUAGE plpgsql;



CREATE TRIGGER insert_new_nec_skill
BEFORE INSERT
ON "kurylenko".necessary_skills
FOR EACH ROW
EXECUTE PROCEDURE "kurylenko".insert_new_nec_skill();
