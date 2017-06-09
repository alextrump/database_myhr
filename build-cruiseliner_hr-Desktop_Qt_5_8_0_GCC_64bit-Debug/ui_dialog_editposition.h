/********************************************************************************
** Form generated from reading UI file 'dialog_editposition.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EDITPOSITION_H
#define UI_DIALOG_EDITPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_editPosition
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame_editFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *layout_positInfo;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *positName;
    QTextEdit *positDescr;
    QWidget *gridLayoutWidget_2;
    QGridLayout *layout_positSkills;
    QWidget *gridLayoutWidget_3;
    QGridLayout *layout_editSkills;
    QComboBox *comboBox_selectSkill;
    QLabel *label_6;
    QPushButton *button_addSkill;
    QPushButton *button_createSkill;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_editPosition)
    {
        if (Dialog_editPosition->objectName().isEmpty())
            Dialog_editPosition->setObjectName(QStringLiteral("Dialog_editPosition"));
        Dialog_editPosition->resize(480, 640);
        Dialog_editPosition->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog_editPosition);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        frame_editFrame = new QFrame(Dialog_editPosition);
        frame_editFrame->setObjectName(QStringLiteral("frame_editFrame"));
        frame_editFrame->setGeometry(QRect(10, 10, 461, 571));
        frame_editFrame->setFrameShape(QFrame::StyledPanel);
        frame_editFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_editFrame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 441, 191));
        layout_positInfo = new QGridLayout(gridLayoutWidget);
        layout_positInfo->setObjectName(QStringLiteral("layout_positInfo"));
        layout_positInfo->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        layout_positInfo->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        layout_positInfo->addWidget(label_2, 1, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        layout_positInfo->addWidget(line, 2, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        layout_positInfo->addWidget(line_2, 2, 1, 1, 1);

        positName = new QLineEdit(gridLayoutWidget);
        positName->setObjectName(QStringLiteral("positName"));

        layout_positInfo->addWidget(positName, 0, 1, 1, 1);

        positDescr = new QTextEdit(gridLayoutWidget);
        positDescr->setObjectName(QStringLiteral("positDescr"));

        layout_positInfo->addWidget(positDescr, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(frame_editFrame);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 229, 441, 261));
        layout_positSkills = new QGridLayout(gridLayoutWidget_2);
        layout_positSkills->setObjectName(QStringLiteral("layout_positSkills"));
        layout_positSkills->setSizeConstraint(QLayout::SetMinimumSize);
        layout_positSkills->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_3 = new QWidget(frame_editFrame);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(9, 490, 441, 81));
        layout_editSkills = new QGridLayout(gridLayoutWidget_3);
        layout_editSkills->setObjectName(QStringLiteral("layout_editSkills"));
        layout_editSkills->setContentsMargins(0, 0, 0, 0);
        comboBox_selectSkill = new QComboBox(gridLayoutWidget_3);
        comboBox_selectSkill->setObjectName(QStringLiteral("comboBox_selectSkill"));
        comboBox_selectSkill->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_selectSkill->setEditable(false);

        layout_editSkills->addWidget(comboBox_selectSkill, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        layout_editSkills->addWidget(label_6, 0, 0, 1, 1);

        button_addSkill = new QPushButton(gridLayoutWidget_3);
        button_addSkill->setObjectName(QStringLiteral("button_addSkill"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_addSkill->sizePolicy().hasHeightForWidth());
        button_addSkill->setSizePolicy(sizePolicy1);
        button_addSkill->setCursor(QCursor(Qt::PointingHandCursor));

        layout_editSkills->addWidget(button_addSkill, 0, 2, 1, 1);

        button_createSkill = new QPushButton(gridLayoutWidget_3);
        button_createSkill->setObjectName(QStringLiteral("button_createSkill"));
        button_createSkill->setCursor(QCursor(Qt::PointingHandCursor));

        layout_editSkills->addWidget(button_createSkill, 1, 1, 1, 1);

        verticalLayoutWidget = new QWidget(frame_editFrame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 199, 441, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(Dialog_editPosition);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_editPosition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_editPosition, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_editPosition);
    } // setupUi

    void retranslateUi(QDialog *Dialog_editPosition)
    {
        Dialog_editPosition->setWindowTitle(QApplication::translate("Dialog_editPosition", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_editPosition", "\320\235\320\260\320\267\320\262\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_editPosition", "\320\236\320\277\320\270\321\201", Q_NULLPTR));
        comboBox_selectSkill->setCurrentText(QString());
        label_6->setText(QApplication::translate("Dialog_editPosition", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\260\320\262\320\270\321\207\320\272\321\203", Q_NULLPTR));
        button_addSkill->setText(QApplication::translate("Dialog_editPosition", "\320\224\320\276\320\264\320\260\321\202\320\270", Q_NULLPTR));
        button_createSkill->setText(QApplication::translate("Dialog_editPosition", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\275\320\276\320\262\321\203 \320\275\320\260\320\262\320\270\321\207\320\272\321\203", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_editPosition", "\320\235\320\265\320\276\320\261\321\205\321\226\320\264\320\275\321\226 \320\275\320\260\320\262\320\270\321\207\320\272\320\270:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_editPosition: public Ui_Dialog_editPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EDITPOSITION_H
