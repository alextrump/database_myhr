/********************************************************************************
** Form generated from reading UI file 'dialog_showpositinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SHOWPOSITINFO_H
#define UI_DIALOG_SHOWPOSITINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_showPositInfo
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *positName;
    QTextBrowser *positDescription;
    QLabel *label;
    QTableView *table_positSkills;

    void setupUi(QDialog *Dialog_showPositInfo)
    {
        if (Dialog_showPositInfo->objectName().isEmpty())
            Dialog_showPositInfo->setObjectName(QStringLiteral("Dialog_showPositInfo"));
        Dialog_showPositInfo->resize(480, 640);
        Dialog_showPositInfo->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_showPositInfo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog_showPositInfo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 9, 461, 581));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 9, 441, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        positName = new QLabel(verticalLayoutWidget);
        positName->setObjectName(QStringLiteral("positName"));
        positName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(positName);

        positDescription = new QTextBrowser(verticalLayoutWidget);
        positDescription->setObjectName(QStringLiteral("positDescription"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(positDescription->sizePolicy().hasHeightForWidth());
        positDescription->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(positDescription);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        table_positSkills = new QTableView(verticalLayoutWidget);
        table_positSkills->setObjectName(QStringLiteral("table_positSkills"));

        verticalLayout->addWidget(table_positSkills);


        retranslateUi(Dialog_showPositInfo);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_showPositInfo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_showPositInfo, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_showPositInfo);
    } // setupUi

    void retranslateUi(QDialog *Dialog_showPositInfo)
    {
        Dialog_showPositInfo->setWindowTitle(QApplication::translate("Dialog_showPositInfo", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        positName->setText(QString());
        label->setText(QApplication::translate("Dialog_showPositInfo", "\320\235\320\265\320\276\320\261\321\205\321\226\320\264\320\275\321\226 \320\275\320\260\320\262\320\270\321\207\320\272\320\270:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_showPositInfo: public Ui_Dialog_showPositInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SHOWPOSITINFO_H
