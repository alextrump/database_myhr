CREATE OR REPLACE VIEW "kurylenko".show_vacancies
AS 
  SELECT
      positions.posit_name,
      SUM(vacancies.type),
      vacancies."Id_position"
  FROM "kurylenko".vacancies vacancies
  --binded vacancies to positions
  JOIN "kurylenko".positions positions
      ON vacancies."Id_position" = positions."Id_position"
  WHERE positions.exists = TRUE
  GROUP BY
      vacancies."Id_position",
      positions.posit_name;


GRANT SELECT ON TABLE "kurylenko".show_vacancies TO admin;
GRANT SELECT ON TABLE "kurylenko".show_vacancies TO hr_operator;
