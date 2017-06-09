CREATE SEQUENCE "kurylenko".inc_primary
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".person ALTER COLUMN "Id_person" SET DEFAULT nextval('"kurylenko".inc_primary'::regclass);


CREATE SEQUENCE "kurylenko".inc_skill
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".skills ALTER COLUMN "Id_skill" SET DEFAULT nextval('"kurylenko".inc_skill'::regclass);

CREATE SEQUENCE "kurylenko".inc_positions
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 10
  CACHE 1;

ALTER TABLE "kurylenko".positions ALTER COLUMN "Id_position" SET DEFAULT nextval('"kurylenko".inc_positions'::regclass);


CREATE SEQUENCE "kurylenko".inc_necessary_skills
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".necessary_skills ALTER COLUMN "Id_nec_skill" SET DEFAULT nextval('"kurylenko".inc_necessary_skills'::regclass);


CREATE SEQUENCE "kurylenko".inc_vacancies
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".vacancies ALTER COLUMN "Id_vacancy" SET DEFAULT nextval('"kurylenko".inc_vacancies'::regclass);



CREATE SEQUENCE "kurylenko".inc_staff
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".staff ALTER COLUMN "Id_staff" SET DEFAULT nextval('"kurylenko".inc_staff'::regclass);



CREATE SEQUENCE "kurylenko".inc_personal_skills
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".personal_skills ALTER COLUMN "Id_per_skils" SET DEFAULT nextval('"kurylenko".inc_personal_skills'::regclass);





CREATE SEQUENCE "kurylenko".inc_absences
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".absences ALTER COLUMN "Id_absence" SET DEFAULT nextval('"kurylenko".inc_absences'::regclass);





CREATE SEQUENCE "kurylenko".inc_absence_type
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 92223
  START 1
  CACHE 1;

ALTER TABLE "kurylenko".absence_type ALTER COLUMN "Id_abs_type" SET DEFAULT nextval('"kurylenko".inc_absence_type'::regclass);





