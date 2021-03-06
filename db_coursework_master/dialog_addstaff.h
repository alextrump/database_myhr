#ifndef DIALOG_ADDSTAFF_H
#define DIALOG_ADDSTAFF_H

#include <QDialog>
#include "dialog_editpersinfo.h"
#include "dialog_openvacancy.h"
//#include "hr_department.h"


namespace Ui {
class Dialog_addStaff;
}

class Dialog_addStaff : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_addStaff(DB_setup* db = 0, QWidget *parent = 0);
    ~Dialog_addStaff();
    void setLastCreatedPersId(int);

private slots:
    void showInpValues();
    void updatePersSelect();
    void updateOpenedVacancies();
    void accept();
    void on_createPerson_clicked();
    void on_openVacancy_clicked();
    void selectNewCreatedPerson();

    void on_buttonBox_accepted();

private:
    Ui::Dialog_addStaff *ui;
    DB_setup* db;
    Dialog_editPersInfo* dialog_editPersInfo;
    QSqlQueryModel* modelAllOpenedVacs;
    QSqlQueryModel* modelAllPersons;
    int lastCreatedPersId;
    int searchIdBynameSurnameInModel(
            QString,
            QSqlQueryModel*,
            int, int, int);

};

#endif // DIALOG_ADDSTAFF_H
