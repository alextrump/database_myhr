#include "dialogentry.h"
#include "ui_dialogentry.h"


DialogEntry::DialogEntry(DB_setup *db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEntry)
{
    ui->setupUi(this);
    this->db = db;

    if (UNSECURE){
        db->setUser("admin");
        db->setPassword("admin");
        bool connected = db->connect_to_db(this);
        if (connected) {
            this->hide();
            HR_department* hr_department = new HR_department(db);
            hr_department->show();
            return;
        };
    }

    hr_dep_users.append("admin");
    hr_dep_users.append("hr_operator");

    ui->username_field->setFocus();
}

DialogEntry::~DialogEntry()
{
    delete ui;
}

// enter user
void DialogEntry::on_username_field_textChanged()
{
    db->setUser(ui->username_field->text());
}

// enter password
void DialogEntry::on_password_field_textChanged()
{
    db->setPassword(ui->password_field->text());
}

//cancel button
void DialogEntry::on_cancel_entry_button_clicked()
{
    this->close();
}

// enter button
void DialogEntry::on_enter_button_clicked()
{
    ui->enter_button->setEnabled(false);
    bool connected = db->connect_to_db(this);
    if (connected) {
        QStringList chosenDepartmentUsers;
        chosenDepartmentUsers = hr_dep_users;
        if (inQStringList(db->getUser(), chosenDepartmentUsers)) {
                HR_department* hr_department = new HR_department(db);
                this->hide();
                hr_department->show();
                return;
        };
        QMessageBox::about(this, "Помилка", "У Вас немає доступу до цього відділу.");
    };
    ui->enter_button->setEnabled(true);
}
