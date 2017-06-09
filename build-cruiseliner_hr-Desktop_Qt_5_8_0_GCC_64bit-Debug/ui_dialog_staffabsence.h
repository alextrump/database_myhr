/********************************************************************************
** Form generated from reading UI file 'dialog_staffabsence.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STAFFABSENCE_H
#define UI_DIALOG_STAFFABSENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_staffabsence
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *staffNameSurname;
    QTableView *absenceTable;
    QGridLayout *gridLayout_2;
    QPushButton *addAbsence;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_staffabsence)
    {
        if (Dialog_staffabsence->objectName().isEmpty())
            Dialog_staffabsence->setObjectName(QStringLiteral("Dialog_staffabsence"));
        Dialog_staffabsence->resize(640, 480);
        Dialog_staffabsence->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_staffabsence);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_staffabsence);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 621, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 9, 601, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        staffNameSurname = new QLabel(verticalLayoutWidget);
        staffNameSurname->setObjectName(QStringLiteral("staffNameSurname"));

        horizontalLayout->addWidget(staffNameSurname);


        verticalLayout->addLayout(horizontalLayout);

        absenceTable = new QTableView(verticalLayoutWidget);
        absenceTable->setObjectName(QStringLiteral("absenceTable"));

        verticalLayout->addWidget(absenceTable);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addAbsence = new QPushButton(verticalLayoutWidget);
        addAbsence->setObjectName(QStringLiteral("addAbsence"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addAbsence->sizePolicy().hasHeightForWidth());
        addAbsence->setSizePolicy(sizePolicy);
        addAbsence->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(addAbsence, 0, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Dialog_staffabsence);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_staffabsence, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_staffabsence, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_staffabsence);
    } // setupUi

    void retranslateUi(QDialog *Dialog_staffabsence)
    {
        Dialog_staffabsence->setWindowTitle(QApplication::translate("Dialog_staffabsence", "\320\222\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214 \321\201\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\260", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_staffabsence", "\320\222\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_staffabsence", "\320\241\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272:", Q_NULLPTR));
        staffNameSurname->setText(QString());
        addAbsence->setText(QApplication::translate("Dialog_staffabsence", "\320\227\320\260\321\204\321\226\320\272\321\201\321\203\320\262\320\260\321\202\320\270 \320\262\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_staffabsence: public Ui_Dialog_staffabsence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STAFFABSENCE_H
