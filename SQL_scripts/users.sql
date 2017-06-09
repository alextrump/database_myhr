/*for admin*/
CREATE USER admin WITH PASSWORD 'admin';
GRANT ALL PRIVILEGES ON DATABASE myhr TO admin;
GRANT ALL ON SCHEMA "kurylenko" TO admin;


/*for operator*/
CREATE USER hr_operator WITH PASSWORD 'hr_operator';
GRANT ALL PRIVILEGES ON DATABASE myhr TO hr_operator;
GRANT ALL ON SCHEMA "kurylenko" TO hr_operator;

REVOKE ALL ON TABLE "kurylenko".absence_type FROM hr_operator;
GRANT SELECT ON TABLE "kurylenko".absence_type TO hr_operator;
REVOKE ALL ON TABLE "kurylenko".positions FROM hr_operator;
GRANT SELECT ON TABLE "kurylenko".positions TO hr_operator;


--after all I also has granted them to each table separately, but maybe it's better to find some way to grant 'admin' the same access as 'postgres' user has in just one command. so think about it thoroughly
