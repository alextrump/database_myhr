/********************************************************************************
** Form generated from reading UI file 'dialog_openvacancy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_OPENVACANCY_H
#define UI_DIALOG_OPENVACANCY_H

#include <QtCore/QDate>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_openVacancy
{
public:
    QFrame *frame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *select_positions;
    QLabel *label_4;
    QSpinBox *vacCount;
    QLabel *label_5;
    QDateEdit *openDate;
    QLabel *label_7;
    QPushButton *button_createPosition;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_openVacancy)
    {
        if (Dialog_openVacancy->objectName().isEmpty())
            Dialog_openVacancy->setObjectName(QStringLiteral("Dialog_openVacancy"));
        Dialog_openVacancy->resize(320, 301);
        frame = new QFrame(Dialog_openVacancy);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 301, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(frame);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 40, 281, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        select_positions = new QComboBox(gridLayoutWidget_2);
        select_positions->setObjectName(QStringLiteral("select_positions"));
        select_positions->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(select_positions, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        vacCount = new QSpinBox(gridLayoutWidget_2);
        vacCount->setObjectName(QStringLiteral("vacCount"));
        vacCount->setCursor(QCursor(Qt::PointingHandCursor));
        vacCount->setMinimum(1);

        gridLayout_2->addWidget(vacCount, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        openDate = new QDateEdit(gridLayoutWidget_2);
        openDate->setObjectName(QStringLiteral("openDate"));
        openDate->setCursor(QCursor(Qt::PointingHandCursor));
        openDate->setCalendarPopup(true);
        openDate->setDate(QDate(2016, 5, 28));

        gridLayout_2->addWidget(openDate, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        button_createPosition = new QPushButton(gridLayoutWidget_2);
        button_createPosition->setObjectName(QStringLiteral("button_createPosition"));
        button_createPosition->setEnabled(false);
        button_createPosition->setCursor(QCursor(Qt::PointingHandCursor));
        button_createPosition->setAutoDefault(false);

        gridLayout_2->addWidget(button_createPosition, 1, 1, 1, 1);

        openDate->raise();
        label_4->raise();
        label_5->raise();
        label_7->raise();
        select_positions->raise();
        button_createPosition->raise();
        vacCount->raise();
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 210, 281, 31));
        label_6->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 10, 281, 31));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 240, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        buttonBox->setCenterButtons(true);
        gridLayoutWidget_2->raise();
        verticalLayoutWidget_2->raise();
        label_6->raise();
        buttonBox->raise();

        retranslateUi(Dialog_openVacancy);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_openVacancy, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_openVacancy, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_openVacancy);
    } // setupUi

    void retranslateUi(QDialog *Dialog_openVacancy)
    {
        Dialog_openVacancy->setWindowTitle(QApplication::translate("Dialog_openVacancy", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_openVacancy", "\320\227 \321\217\320\272\320\276\321\227 \320\264\320\260\321\202\320\270:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_openVacancy", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_openVacancy", "\320\237\320\276\321\201\320\260\320\264\320\260", Q_NULLPTR));
        button_createPosition->setText(QApplication::translate("Dialog_openVacancy", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_openVacancy", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216?", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_openVacancy", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_openVacancy: public Ui_Dialog_openVacancy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_OPENVACANCY_H
