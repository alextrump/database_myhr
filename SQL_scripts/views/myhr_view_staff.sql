CREATE OR REPLACE VIEW "kurylenko".show_staff
AS SELECT
    posit_name,
    per_name,
    per_surname,
    staff."Id_staff",
    staff."Id_person",
    staff."Id_vacancy",
    vacancies."Id_position",
    staff.date_in,
    staff.date_out
FROM "kurylenko".staff staff
    --binded staff unit to the person
    JOIN "kurylenko".person persons 
        ON staff."Id_person" = persons."Id_person"
    --transitively binded staff unit to the position
    JOIN "kurylenko".vacancies vacancies 
        ON staff."Id_vacancy" = vacancies."Id_vacancy"
    JOIN "kurylenko".positions positions 
        ON vacancies."Id_position" = positions."Id_position"
ORDER BY posit_name;

GRANT SELECT ON TABLE "kurylenko".show_staff TO admin;
GRANT SELECT ON TABLE "kurylenko".show_staff TO hr_operator;
