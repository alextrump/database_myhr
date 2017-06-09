/********************************************************************************
** Form generated from reading UI file 'dialog_firestaff.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FIRESTAFF_H
#define UI_DIALOG_FIRESTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_fireStaff
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *staffNameSurname;
    QLabel *label_3;
    QLabel *positioin;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QDateEdit *fireDate;

    void setupUi(QDialog *Dialog_fireStaff)
    {
        if (Dialog_fireStaff->objectName().isEmpty())
            Dialog_fireStaff->setObjectName(QStringLiteral("Dialog_fireStaff"));
        Dialog_fireStaff->resize(280, 320);
        buttonBox = new QDialogButtonBox(Dialog_fireStaff);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_fireStaff);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 261, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 241, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        staffNameSurname = new QLabel(verticalLayoutWidget);
        staffNameSurname->setObjectName(QStringLiteral("staffNameSurname"));
        staffNameSurname->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(staffNameSurname);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        positioin = new QLabel(verticalLayoutWidget);
        positioin->setObjectName(QStringLiteral("positioin"));
        positioin->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(positioin);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        fireDate = new QDateEdit(verticalLayoutWidget);
        fireDate->setObjectName(QStringLiteral("fireDate"));
        fireDate->setCursor(QCursor(Qt::PointingHandCursor));
        fireDate->setCalendarPopup(true);

        gridLayout->addWidget(fireDate, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Dialog_fireStaff);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_fireStaff, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_fireStaff, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_fireStaff);
    } // setupUi

    void retranslateUi(QDialog *Dialog_fireStaff)
    {
        Dialog_fireStaff->setWindowTitle(QApplication::translate("Dialog_fireStaff", "\320\227\320\262\321\226\320\273\321\214\320\275\320\270\321\202\320\270 \321\201\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\260", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_fireStaff", "\320\227\320\262\321\226\320\273\321\214\320\275\320\270\321\202\320\270 \321\201\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\260:", Q_NULLPTR));
        staffNameSurname->setText(QString());
        label_3->setText(QApplication::translate("Dialog_fireStaff", "\320\267 \320\277\320\276\321\201\320\260\320\264\320\270:", Q_NULLPTR));
        positioin->setText(QString());
        label_5->setText(QApplication::translate("Dialog_fireStaff", "\320\224\320\260\321\202\320\260 \320\267\320\262\321\226\320\273\321\214\320\275\320\265\320\275\320\275\321\217:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_fireStaff: public Ui_Dialog_fireStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FIRESTAFF_H
