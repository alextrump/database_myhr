/********************************************************************************
** Form generated from reading UI file 'dialogui_editpersinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUI_EDITPERSINFO_H
#define UI_DIALOGUI_EDITPERSINFO_H

#include <QtCore/QLocale>
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogUi_editPersInfo
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame_editFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *persName;
    QLineEdit *persEdu;
    QLabel *label;
    QLineEdit *persSurname;
    QDateEdit *persBirthDate;
    QLabel *label_3;
    QFrame *line;
    QFrame *line_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *layout_persSkills;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_selectSkill;
    QLabel *label_6;
    QPushButton *button_addSkill;
    QPushButton *button_createSkill;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;

    void setupUi(QDialog *DialogUi_editPersInfo)
    {
        if (DialogUi_editPersInfo->objectName().isEmpty())
            DialogUi_editPersInfo->setObjectName(QStringLiteral("DialogUi_editPersInfo"));
        DialogUi_editPersInfo->setWindowModality(Qt::WindowModal);
        DialogUi_editPersInfo->resize(480, 640);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogUi_editPersInfo->sizePolicy().hasHeightForWidth());
        DialogUi_editPersInfo->setSizePolicy(sizePolicy);
        DialogUi_editPersInfo->setAcceptDrops(true);
        DialogUi_editPersInfo->setLocale(QLocale(QLocale::Ukrainian, QLocale::Ukraine));
        DialogUi_editPersInfo->setSizeGripEnabled(false);
        DialogUi_editPersInfo->setModal(true);
        buttonBox = new QDialogButtonBox(DialogUi_editPersInfo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox->setAcceptDrops(true);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);
        frame_editFrame = new QFrame(DialogUi_editPersInfo);
        frame_editFrame->setObjectName(QStringLiteral("frame_editFrame"));
        frame_editFrame->setGeometry(QRect(10, 10, 461, 571));
        frame_editFrame->setFrameShape(QFrame::StyledPanel);
        frame_editFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_editFrame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 441, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        persName = new QLineEdit(gridLayoutWidget);
        persName->setObjectName(QStringLiteral("persName"));

        gridLayout->addWidget(persName, 0, 1, 1, 1);

        persEdu = new QLineEdit(gridLayoutWidget);
        persEdu->setObjectName(QStringLiteral("persEdu"));
        persEdu->setCursorPosition(0);

        gridLayout->addWidget(persEdu, 3, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        persSurname = new QLineEdit(gridLayoutWidget);
        persSurname->setObjectName(QStringLiteral("persSurname"));
        persSurname->setCursorPosition(0);

        gridLayout->addWidget(persSurname, 1, 1, 1, 1);

        persBirthDate = new QDateEdit(gridLayoutWidget);
        persBirthDate->setObjectName(QStringLiteral("persBirthDate"));
        persBirthDate->setCursor(QCursor(Qt::PointingHandCursor));
        persBirthDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        persBirthDate->setCalendarPopup(true);

        gridLayout->addWidget(persBirthDate, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 4, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(frame_editFrame);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 229, 441, 261));
        layout_persSkills = new QGridLayout(gridLayoutWidget_2);
        layout_persSkills->setObjectName(QStringLiteral("layout_persSkills"));
        layout_persSkills->setSizeConstraint(QLayout::SetMinimumSize);
        layout_persSkills->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_3 = new QWidget(frame_editFrame);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(9, 490, 441, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_selectSkill = new QComboBox(gridLayoutWidget_3);
        comboBox_selectSkill->setObjectName(QStringLiteral("comboBox_selectSkill"));
        comboBox_selectSkill->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_selectSkill->setEditable(false);

        gridLayout_2->addWidget(comboBox_selectSkill, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        button_addSkill = new QPushButton(gridLayoutWidget_3);
        button_addSkill->setObjectName(QStringLiteral("button_addSkill"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_addSkill->sizePolicy().hasHeightForWidth());
        button_addSkill->setSizePolicy(sizePolicy2);
        button_addSkill->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_addSkill, 0, 2, 1, 1);

        button_createSkill = new QPushButton(gridLayoutWidget_3);
        button_createSkill->setObjectName(QStringLiteral("button_createSkill"));
        button_createSkill->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_createSkill, 1, 1, 1, 1);

        verticalLayoutWidget = new QWidget(frame_editFrame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 199, 441, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        QWidget::setTabOrder(persName, persSurname);
        QWidget::setTabOrder(persSurname, persBirthDate);
        QWidget::setTabOrder(persBirthDate, persEdu);
        QWidget::setTabOrder(persEdu, comboBox_selectSkill);
        QWidget::setTabOrder(comboBox_selectSkill, button_addSkill);
        QWidget::setTabOrder(button_addSkill, button_createSkill);

        retranslateUi(DialogUi_editPersInfo);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogUi_editPersInfo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogUi_editPersInfo, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogUi_editPersInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogUi_editPersInfo)
    {
        DialogUi_editPersInfo->setWindowTitle(QApplication::translate("DialogUi_editPersInfo", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\260\320\275\320\272\320\265\321\202\321\203 \321\204\321\226\320\267. \320\276\321\201\320\276\320\261\320\270", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogUi_editPersInfo", "\320\236\321\201\320\262\321\226\321\202\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogUi_editPersInfo", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", Q_NULLPTR));
        label->setText(QApplication::translate("DialogUi_editPersInfo", "\320\206\320\274'\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogUi_editPersInfo", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\200\320\276\320\264\320\266\320\265\320\275\320\275\321\217", Q_NULLPTR));
        comboBox_selectSkill->setCurrentText(QString());
        label_6->setText(QApplication::translate("DialogUi_editPersInfo", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\260\320\262\320\270\321\207\320\272\321\203", Q_NULLPTR));
        button_addSkill->setText(QApplication::translate("DialogUi_editPersInfo", "\320\224\320\276\320\264\320\260\321\202\320\270", Q_NULLPTR));
        button_createSkill->setText(QApplication::translate("DialogUi_editPersInfo", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\275\320\276\320\262\321\203 \320\275\320\260\320\262\320\270\321\207\320\272\321\203", Q_NULLPTR));
        label_5->setText(QApplication::translate("DialogUi_editPersInfo", "\320\235\320\260\320\262\320\270\321\207\320\272\320\270:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogUi_editPersInfo: public Ui_DialogUi_editPersInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUI_EDITPERSINFO_H
