/********************************************************************************
** Form generated from reading UI file 'dialog_showstaffprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SHOWSTAFFPROFILE_H
#define UI_DIALOG_SHOWSTAFFPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_showStaffProfile
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *staffNameSurname;
    QGridLayout *gridLayout;
    QLabel *staffEdu;
    QLabel *label;
    QLabel *label_2;
    QLabel *staffAge;
    QLabel *label_4;
    QTableView *skillsTable;
    QLabel *label_3;
    QTableView *workHistoryTable;

    void setupUi(QDialog *Dialog_showStaffProfile)
    {
        if (Dialog_showStaffProfile->objectName().isEmpty())
            Dialog_showStaffProfile->setObjectName(QStringLiteral("Dialog_showStaffProfile"));
        Dialog_showStaffProfile->resize(479, 640);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog_showStaffProfile->sizePolicy().hasHeightForWidth());
        Dialog_showStaffProfile->setSizePolicy(sizePolicy);
        Dialog_showStaffProfile->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_showStaffProfile);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_showStaffProfile);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 461, 581));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 441, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        staffNameSurname = new QLabel(verticalLayoutWidget);
        staffNameSurname->setObjectName(QStringLiteral("staffNameSurname"));
        staffNameSurname->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(staffNameSurname);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        staffEdu = new QLabel(verticalLayoutWidget);
        staffEdu->setObjectName(QStringLiteral("staffEdu"));

        gridLayout->addWidget(staffEdu, 1, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        staffAge = new QLabel(verticalLayoutWidget);
        staffAge->setObjectName(QStringLiteral("staffAge"));

        gridLayout->addWidget(staffAge, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        skillsTable = new QTableView(verticalLayoutWidget);
        skillsTable->setObjectName(QStringLiteral("skillsTable"));

        verticalLayout->addWidget(skillsTable);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        workHistoryTable = new QTableView(verticalLayoutWidget);
        workHistoryTable->setObjectName(QStringLiteral("workHistoryTable"));

        verticalLayout->addWidget(workHistoryTable);


        retranslateUi(Dialog_showStaffProfile);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_showStaffProfile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_showStaffProfile, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_showStaffProfile);
    } // setupUi

    void retranslateUi(QDialog *Dialog_showStaffProfile)
    {
        Dialog_showStaffProfile->setWindowTitle(QApplication::translate("Dialog_showStaffProfile", "\320\220\320\275\320\272\320\265\321\202\320\260 \321\204\321\226\320\267. \320\276\321\201\320\276\320\261\320\270", Q_NULLPTR));
        staffNameSurname->setText(QString());
        staffEdu->setText(QString());
        label->setText(QApplication::translate("Dialog_showStaffProfile", "\320\236\321\201\320\262\321\226\321\202\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_showStaffProfile", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\200\320\276\320\264\320\266\320\265\320\275\320\275\321\217", Q_NULLPTR));
        staffAge->setText(QString());
        label_4->setText(QApplication::translate("Dialog_showStaffProfile", "\320\235\320\260\320\262\320\270\321\207\320\272\320\270 \321\201\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\260:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_showStaffProfile", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226 \320\277\320\276\321\201\320\260\320\264\320\270:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_showStaffProfile: public Ui_Dialog_showStaffProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SHOWSTAFFPROFILE_H
