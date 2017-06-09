/********************************************************************************
** Form generated from reading UI file 'dialogentry.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGENTRY_H
#define UI_DIALOGENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogEntry
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *enter_button;
    QPushButton *cancel_entry_button;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *username_field;
    QLineEdit *password_field;

    void setupUi(QDialog *DialogEntry)
    {
        if (DialogEntry->objectName().isEmpty())
            DialogEntry->setObjectName(QStringLiteral("DialogEntry"));
        DialogEntry->setWindowModality(Qt::NonModal);
        DialogEntry->resize(404, 214);
        gridLayoutWidget = new QWidget(DialogEntry);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 361, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, -1, -1, 0);
        enter_button = new QPushButton(gridLayoutWidget);
        enter_button->setObjectName(QStringLiteral("enter_button"));
        enter_button->setCursor(QCursor(Qt::PointingHandCursor));
        enter_button->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(enter_button);

        cancel_entry_button = new QPushButton(gridLayoutWidget);
        cancel_entry_button->setObjectName(QStringLiteral("cancel_entry_button"));
        cancel_entry_button->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cancel_entry_button->sizePolicy().hasHeightForWidth());
        cancel_entry_button->setSizePolicy(sizePolicy);
        cancel_entry_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(cancel_entry_button);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label->setWordWrap(false);
        label->setMargin(0);
        label->setIndent(1);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_3, 0, Qt::AlignVCenter);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignVCenter);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        username_field = new QLineEdit(gridLayoutWidget);
        username_field->setObjectName(QStringLiteral("username_field"));
        username_field->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(username_field);

        password_field = new QLineEdit(gridLayoutWidget);
        password_field->setObjectName(QStringLiteral("password_field"));
        password_field->setEchoMode(QLineEdit::Password);
        password_field->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(password_field);


        horizontalLayout_4->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 2, 1);


        retranslateUi(DialogEntry);

        QMetaObject::connectSlotsByName(DialogEntry);
    } // setupUi

    void retranslateUi(QDialog *DialogEntry)
    {
        DialogEntry->setWindowTitle(QApplication::translate("DialogEntry", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\321\226\321\217", Q_NULLPTR));
        enter_button->setText(QApplication::translate("DialogEntry", "\320\222\321\205\321\226\320\264", Q_NULLPTR));
        cancel_entry_button->setText(QApplication::translate("DialogEntry", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
        label->setText(QApplication::translate("DialogEntry", "\320\222\321\226\320\272\320\275\320\276 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\321\226\321\227 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogEntry", "\320\206\320\274'\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogEntry", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogEntry: public Ui_DialogEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGENTRY_H
