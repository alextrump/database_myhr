CREATE OR REPLACE VIEW "kurylenko".show_positions
AS SELECT
    positions.posit_name,
    staffCount.count,
    positions."Id_position"
FROM
    "kurylenko".positions positions
    LEFT JOIN (
        SELECT
            vacancies."Id_position", count(*)
        FROM
             "kurylenko".vacancies vacancies
        JOIN "kurylenko".staff staff
        ON   staff."Id_vacancy" = vacancies."Id_vacancy"
        WHERE
             staff.date_in <= current_date AND
             (staff.date_out > current_date OR staff.date_out IS NULL)
        GROUP BY vacancies."Id_position") AS staffCount 
    ON positions."Id_position" = staffCount."Id_position";


GRANT SELECT ON TABLE "kurylenko".show_positions TO admin;
GRANT SELECT ON TABLE "kurylenko".show_positions TO hr_operator;
