/********************************************************************************
** Form generated from reading UI file 'dialog_createabstype.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREATEABSTYPE_H
#define UI_DIALOG_CREATEABSTYPE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_createAbsType
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *absName;
    QLabel *label_2;
    QTextEdit *absDescription;

    void setupUi(QDialog *Dialog_createAbsType)
    {
        if (Dialog_createAbsType->objectName().isEmpty())
            Dialog_createAbsType->setObjectName(QStringLiteral("Dialog_createAbsType"));
        Dialog_createAbsType->resize(240, 320);
        Dialog_createAbsType->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_createAbsType);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_createAbsType);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 221, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 201, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        absName = new QLineEdit(gridLayoutWidget);
        absName->setObjectName(QStringLiteral("absName"));

        gridLayout->addWidget(absName, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        absDescription = new QTextEdit(gridLayoutWidget);
        absDescription->setObjectName(QStringLiteral("absDescription"));

        gridLayout->addWidget(absDescription, 3, 0, 1, 1);


        retranslateUi(Dialog_createAbsType);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_createAbsType, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_createAbsType, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_createAbsType);
    } // setupUi

    void retranslateUi(QDialog *Dialog_createAbsType)
    {
        Dialog_createAbsType->setWindowTitle(QApplication::translate("Dialog_createAbsType", "\320\235\320\276\320\262\320\270\320\271 \321\202\320\270\320\277 \320\262\321\226\320\264\321\201\321\203\321\202\320\275\320\276\321\201\321\202\321\226", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_createAbsType", "\320\235\320\260\320\267\320\262\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_createAbsType", "\320\236\320\277\320\270\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_createAbsType: public Ui_Dialog_createAbsType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREATEABSTYPE_H
