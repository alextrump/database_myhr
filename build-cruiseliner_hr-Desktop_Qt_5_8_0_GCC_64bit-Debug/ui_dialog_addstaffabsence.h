/********************************************************************************
** Form generated from reading UI file 'dialog_addstaffabsence.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDSTAFFABSENCE_H
#define UI_DIALOG_ADDSTAFFABSENCE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addStaffAbsence
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *selectAbsType;
    QLabel *label_4;
    QLabel *label_3;
    QDateEdit *absStart;
    QDateEdit *absEnd;
    QPushButton *createAbsType;
    QLabel *label_5;
    QTextEdit *absDescription;

    void setupUi(QDialog *Dialog_addStaffAbsence)
    {
        if (Dialog_addStaffAbsence->objectName().isEmpty())
            Dialog_addStaffAbsence->setObjectName(QStringLiteral("Dialog_addStaffAbsence"));
        Dialog_addStaffAbsence->resize(320, 392);
        Dialog_addStaffAbsence->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_addStaffAbsence);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 350, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_addStaffAbsence);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 301, 331));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 281, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        selectAbsType = new QComboBox(verticalLayoutWidget);
        selectAbsType->setObjectName(QStringLiteral("selectAbsType"));
        selectAbsType->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(selectAbsType, 0, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        absStart = new QDateEdit(verticalLayoutWidget);
        absStart->setObjectName(QStringLiteral("absStart"));
        absStart->setCursor(QCursor(Qt::PointingHandCursor));
        absStart->setCalendarPopup(true);

        gridLayout->addWidget(absStart, 2, 1, 1, 1);

        absEnd = new QDateEdit(verticalLayoutWidget);
        absEnd->setObjectName(QStringLiteral("absEnd"));
        absEnd->setCursor(QCursor(Qt::PointingHandCursor));
        absEnd->setCalendarPopup(true);

        gridLayout->addWidget(absEnd, 3, 1, 1, 1);

        createAbsType = new QPushButton(verticalLayoutWidget);
        createAbsType->setObjectName(QStringLiteral("createAbsType"));
        createAbsType->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(createAbsType, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        absDescription = new QTextEdit(verticalLayoutWidget);
        absDescription->setObjectName(QStringLiteral("absDescription"));

        verticalLayout->addWidget(absDescription);


        retranslateUi(Dialog_addStaffAbsence);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_addStaffAbsence, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_addStaffAbsence, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_addStaffAbsence);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addStaffAbsence)
    {
        Dialog_addStaffAbsence->setWindowTitle(QApplication::translate("Dialog_addStaffAbsence", "\320\227\320\260\321\204\321\226\320\272\321\201\321\203\320\262\320\260\321\202\320\270 \320\262\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\227\320\260\321\204\321\226\320\272\321\201\321\203\320\262\320\260\321\202\320\270 \320\262\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\242\320\270\320\277:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\232\321\226\320\275\320\265\321\206\321\214:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\237\320\276\321\207\320\260\321\202\320\276\320\272:", Q_NULLPTR));
        createAbsType->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \321\202\320\270\320\277", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_addStaffAbsence", "\320\236\320\277\320\270\321\201:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addStaffAbsence: public Ui_Dialog_addStaffAbsence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDSTAFFABSENCE_H
