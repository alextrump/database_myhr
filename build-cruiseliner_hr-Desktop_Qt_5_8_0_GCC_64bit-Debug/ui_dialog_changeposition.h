/********************************************************************************
** Form generated from reading UI file 'dialog_changeposition.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHANGEPOSITION_H
#define UI_DIALOG_CHANGEPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_changePosition
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *staffNameSurname;
    QLabel *label_2;
    QLabel *currentPosition;
    QLabel *label_4;
    QComboBox *selectNewPosition;
    QPushButton *openNewVacancy;
    QLabel *label;
    QDateEdit *changeDate;

    void setupUi(QDialog *Dialog_changePosition)
    {
        if (Dialog_changePosition->objectName().isEmpty())
            Dialog_changePosition->setObjectName(QStringLiteral("Dialog_changePosition"));
        Dialog_changePosition->resize(240, 360);
        Dialog_changePosition->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_changePosition);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_changePosition);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 221, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 201, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        staffNameSurname = new QLabel(verticalLayoutWidget);
        staffNameSurname->setObjectName(QStringLiteral("staffNameSurname"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(staffNameSurname->sizePolicy().hasHeightForWidth());
        staffNameSurname->setSizePolicy(sizePolicy);
        staffNameSurname->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(staffNameSurname);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_2);

        currentPosition = new QLabel(verticalLayoutWidget);
        currentPosition->setObjectName(QStringLiteral("currentPosition"));
        sizePolicy.setHeightForWidth(currentPosition->sizePolicy().hasHeightForWidth());
        currentPosition->setSizePolicy(sizePolicy);
        currentPosition->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(currentPosition);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_4);

        selectNewPosition = new QComboBox(verticalLayoutWidget);
        selectNewPosition->setObjectName(QStringLiteral("selectNewPosition"));
        selectNewPosition->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(selectNewPosition);

        openNewVacancy = new QPushButton(verticalLayoutWidget);
        openNewVacancy->setObjectName(QStringLiteral("openNewVacancy"));
        openNewVacancy->setCursor(QCursor(Qt::PointingHandCursor));
        openNewVacancy->setAutoDefault(false);

        verticalLayout->addWidget(openNewVacancy);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        changeDate = new QDateEdit(verticalLayoutWidget);
        changeDate->setObjectName(QStringLiteral("changeDate"));
        changeDate->setCalendarPopup(true);

        verticalLayout->addWidget(changeDate);


        retranslateUi(Dialog_changePosition);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_changePosition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_changePosition, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_changePosition);
    } // setupUi

    void retranslateUi(QDialog *Dialog_changePosition)
    {
        Dialog_changePosition->setWindowTitle(QApplication::translate("Dialog_changePosition", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        staffNameSurname->setText(QString());
        label_2->setText(QApplication::translate("Dialog_changePosition", "\320\237\320\276\321\202\320\276\321\207\320\275\320\260 \320\277\320\276\321\201\320\260\320\264\320\260:", Q_NULLPTR));
        currentPosition->setText(QString());
        label_4->setText(QApplication::translate("Dialog_changePosition", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\275\320\260:", Q_NULLPTR));
        openNewVacancy->setText(QApplication::translate("Dialog_changePosition", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_changePosition", "\320\224\320\260\321\202\320\260 \320\267\320\274\321\226\320\275\320\270 \320\277\320\276\321\201\320\260\320\264\320\270 :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_changePosition: public Ui_Dialog_changePosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHANGEPOSITION_H
