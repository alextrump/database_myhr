/********************************************************************************
** Form generated from reading UI file 'dialog_addstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDSTAFF_H
#define UI_DIALOG_ADDSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addStaff
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *selectPerson;
    QPushButton *createPerson;
    QLabel *label;
    QPushButton *openVacancy;
    QLabel *label_2;
    QComboBox *selectVacancy;
    QDateEdit *startDate;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_addStaff)
    {
        if (Dialog_addStaff->objectName().isEmpty())
            Dialog_addStaff->setObjectName(QStringLiteral("Dialog_addStaff"));
        Dialog_addStaff->resize(561, 320);
        buttonBox = new QDialogButtonBox(Dialog_addStaff);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 541, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);
        frame = new QFrame(Dialog_addStaff);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 9, 541, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 521, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectPerson = new QComboBox(gridLayoutWidget);
        selectPerson->setObjectName(QStringLiteral("selectPerson"));
        selectPerson->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(selectPerson, 0, 1, 1, 1);

        createPerson = new QPushButton(gridLayoutWidget);
        createPerson->setObjectName(QStringLiteral("createPerson"));
        createPerson->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(createPerson, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        openVacancy = new QPushButton(gridLayoutWidget);
        openVacancy->setObjectName(QStringLiteral("openVacancy"));
        openVacancy->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(openVacancy, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        selectVacancy = new QComboBox(gridLayoutWidget);
        selectVacancy->setObjectName(QStringLiteral("selectVacancy"));
        selectVacancy->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(selectVacancy, 2, 1, 1, 1);

        startDate = new QDateEdit(gridLayoutWidget);
        startDate->setObjectName(QStringLiteral("startDate"));
        startDate->setCursor(QCursor(Qt::PointingHandCursor));
        startDate->setCalendarPopup(true);

        gridLayout->addWidget(startDate, 4, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);


        retranslateUi(Dialog_addStaff);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_addStaff, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_addStaff, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_addStaff);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addStaff)
    {
        Dialog_addStaff->setWindowTitle(QApplication::translate("Dialog_addStaff", "\320\237\321\200\320\270\320\271\320\276\320\274 \320\275\320\260 \321\200\320\276\320\261\320\276\321\202\321\203", Q_NULLPTR));
        createPerson->setText(QApplication::translate("Dialog_addStaff", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\260\320\275\320\272\320\265\321\202\321\203 \321\204\321\226\320\267. \320\276\321\201\320\276\320\261\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_addStaff", "\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \321\204\321\226\320\267\320\270\321\207\320\275\321\203 \320\276\321\201\320\276\320\261\321\203:", Q_NULLPTR));
        openVacancy->setText(QApplication::translate("Dialog_addStaff", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_addStaff", "\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_addStaff", "\320\224\320\260\321\202\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addStaff: public Ui_Dialog_addStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDSTAFF_H
