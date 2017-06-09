/********************************************************************************
** Form generated from reading UI file 'dialog_createskill.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREATESKILL_H
#define UI_DIALOG_CREATESKILL_H

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

class Ui_Dialog_createSkill
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QLabel *label_2;
    QTextEdit *textEdit_descr;

    void setupUi(QDialog *Dialog_createSkill)
    {
        if (Dialog_createSkill->objectName().isEmpty())
            Dialog_createSkill->setObjectName(QStringLiteral("Dialog_createSkill"));
        Dialog_createSkill->resize(240, 320);
        Dialog_createSkill->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_createSkill);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_createSkill);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 221, 251));
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

        lineEdit_name = new QLineEdit(gridLayoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        textEdit_descr = new QTextEdit(gridLayoutWidget);
        textEdit_descr->setObjectName(QStringLiteral("textEdit_descr"));

        gridLayout->addWidget(textEdit_descr, 3, 0, 1, 1);


        retranslateUi(Dialog_createSkill);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_createSkill, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_createSkill, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_createSkill);
    } // setupUi

    void retranslateUi(QDialog *Dialog_createSkill)
    {
        Dialog_createSkill->setWindowTitle(QApplication::translate("Dialog_createSkill", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\275\320\260\320\262\320\270\321\207\320\272\321\203", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_createSkill", "\320\235\320\260\320\267\320\262\320\260", Q_NULLPTR));
        lineEdit_name->setText(QString());
        label_2->setText(QApplication::translate("Dialog_createSkill", "\320\236\320\277\320\270\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_createSkill: public Ui_Dialog_createSkill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREATESKILL_H
