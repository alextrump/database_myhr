/********************************************************************************
** Form generated from reading UI file 'dialog_removevacancy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_REMOVEVACANCY_H
#define UI_DIALOG_REMOVEVACANCY_H

#include <QtCore/QDate>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_removeVacancy
{
public:
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDateEdit *procDate;
    QLabel *label_3;
    QSpinBox *vacCount;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_positName;

    void setupUi(QDialog *Dialog_removeVacancy)
    {
        if (Dialog_removeVacancy->objectName().isEmpty())
            Dialog_removeVacancy->setObjectName(QStringLiteral("Dialog_removeVacancy"));
        Dialog_removeVacancy->resize(320, 241);
        Dialog_removeVacancy->setModal(true);
        frame = new QFrame(Dialog_removeVacancy);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 301, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 281, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        procDate = new QDateEdit(gridLayoutWidget);
        procDate->setObjectName(QStringLiteral("procDate"));
        procDate->setCursor(QCursor(Qt::PointingHandCursor));
        procDate->setCalendarPopup(true);
        procDate->setDate(QDate(2016, 5, 28));

        gridLayout->addWidget(procDate, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        vacCount = new QSpinBox(gridLayoutWidget);
        vacCount->setObjectName(QStringLiteral("vacCount"));
        vacCount->setCursor(QCursor(Qt::PointingHandCursor));
        vacCount->setMinimum(1);

        gridLayout->addWidget(vacCount, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 281, 31));
        label_2->setAlignment(Qt::AlignCenter);
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 180, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        buttonBox->setCenterButtons(true);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 10, 281, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_positName = new QLabel(verticalLayoutWidget);
        label_positName->setObjectName(QStringLiteral("label_positName"));
        label_positName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_positName);


        retranslateUi(Dialog_removeVacancy);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_removeVacancy, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_removeVacancy, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_removeVacancy);
    } // setupUi

    void retranslateUi(QDialog *Dialog_removeVacancy)
    {
        Dialog_removeVacancy->setWindowTitle(QApplication::translate("Dialog_removeVacancy", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_removeVacancy", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\321\200\320\270\321\202\321\202\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_removeVacancy", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_removeVacancy", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216?", Q_NULLPTR));
        label_positName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_removeVacancy: public Ui_Dialog_removeVacancy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_REMOVEVACANCY_H
