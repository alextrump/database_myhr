CREATE OR REPLACE VIEW "kurylenko".show_shortStaffInfo 
AS
    SELECT staff."Id_staff", person.per_name, person.per_surname, positions.posit_name
    FROM "kurylenko".staff
    --join person's info here
    JOIN "kurylenko".person person
          ON staff."Id_person" = person."Id_person"
    --transitively join position of this staff unit
    JOIN "kurylenko".vacancies vacancies
          ON staff."Id_vacancy" = vacancies."Id_vacancy"
    JOIN "kurylenko".positions positions
          ON vacancies."Id_position" = positions."Id_position";

GRANT SELECT ON TABLE "kurylenko".show_shortStaffInfo TO admin;
GRANT SELECT ON TABLE "kurylenko".show_shortStaffInfo TO hr_operator;
