CREATE OR REPLACE VIEW "kurylenko".show_free_persons
AS
SELECT
    per_name,
    per_surname,
    "Id_person"
FROM "kurylenko".person
WHERE
    "Id_person" NOT IN (
        SELECT "Id_person"
        FROM "kurylenko".staff
        WHERE date_out IS NULL);


GRANT SELECT ON TABLE "kurylenko".show_free_persons TO admin;
GRANT SELECT ON TABLE "kurylenko".show_free_persons TO hr_operator;
