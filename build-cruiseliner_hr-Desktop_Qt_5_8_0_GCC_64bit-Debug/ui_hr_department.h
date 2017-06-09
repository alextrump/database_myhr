/********************************************************************************
** Form generated from reading UI file 'hr_department.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HR_DEPARTMENT_H
#define UI_HR_DEPARTMENT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HR_department
{
public:
    QAction *actionAsd;
    QAction *action;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_stuff;
    QTableView *table_staff;
    QFrame *frame_actions_1;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *button_printReport;
    QPushButton *button_firePers;
    QPushButton *button_changePersPosition;
    QFrame *line;
    QPushButton *button_showPersInfo;
    QPushButton *button_addStuff;
    QPushButton *button_addPersAbsence;
    QPushButton *button_editPersInfo;
    QFrame *frame_filter_1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *date_historyView;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *updateStaffTable;
    QPushButton *button_closeWindow;
    QWidget *tab_vacancies;
    QTableView *table_vacancies;
    QFrame *frame_actions_4;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *button_openVacancy;
    QPushButton *button_closeVacancy;
    QFrame *line_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *updateVacanciesTable;
    QPushButton *button_closeWindow_3;
    QWidget *tab_positions;
    QTableView *table_positions;
    QFrame *frame_actions_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *button_addPosition;
    QPushButton *button_editPosition;
    QPushButton *button_showPositInfo;
    QPushButton *button_deletePosition;
    QFrame *line_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *updatePositTable;
    QPushButton *button_closeWindow_2;
    QMenuBar *menuBar;
    QMenu *menuAsd;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HR_department)
    {
        if (HR_department->objectName().isEmpty())
            HR_department->setObjectName(QStringLiteral("HR_department"));
        HR_department->setEnabled(true);
        HR_department->resize(1360, 789);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HR_department->sizePolicy().hasHeightForWidth());
        HR_department->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(216, 217, 218, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(235, 236, 236, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(108, 108, 109, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(144, 145, 145, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        HR_department->setPalette(palette);
        HR_department->setLocale(QLocale(QLocale::Ukrainian, QLocale::Ukraine));
        actionAsd = new QAction(HR_department);
        actionAsd->setObjectName(QStringLiteral("actionAsd"));
        action = new QAction(HR_department);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(HR_department);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMouseTracking(false);
        centralWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1351, 751));
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tab_stuff = new QWidget();
        tab_stuff->setObjectName(QStringLiteral("tab_stuff"));
        tab_stuff->setEnabled(true);
        tab_stuff->setFocusPolicy(Qt::NoFocus);
        table_staff = new QTableView(tab_stuff);
        table_staff->setObjectName(QStringLiteral("table_staff"));
        table_staff->setGeometry(QRect(20, 20, 991, 451));
        table_staff->horizontalHeader()->setCascadingSectionResizes(true);
        table_staff->horizontalHeader()->setStretchLastSection(false);
        frame_actions_1 = new QFrame(tab_stuff);
        frame_actions_1->setObjectName(QStringLiteral("frame_actions_1"));
        frame_actions_1->setGeometry(QRect(1040, 20, 251, 441));
        frame_actions_1->setFrameShape(QFrame::StyledPanel);
        frame_actions_1->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(frame_actions_1);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 10, 231, 361));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        button_printReport = new QPushButton(gridLayoutWidget_2);
        button_printReport->setObjectName(QStringLiteral("button_printReport"));
        button_printReport->setEnabled(false);
        button_printReport->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_printReport, 6, 0, 1, 1);

        button_firePers = new QPushButton(gridLayoutWidget_2);
        button_firePers->setObjectName(QStringLiteral("button_firePers"));
        button_firePers->setEnabled(false);
        button_firePers->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_firePers, 5, 0, 1, 1);

        button_changePersPosition = new QPushButton(gridLayoutWidget_2);
        button_changePersPosition->setObjectName(QStringLiteral("button_changePersPosition"));
        button_changePersPosition->setEnabled(false);
        button_changePersPosition->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_changePersPosition, 2, 0, 1, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 7, 0, 1, 1);

        button_showPersInfo = new QPushButton(gridLayoutWidget_2);
        button_showPersInfo->setObjectName(QStringLiteral("button_showPersInfo"));
        button_showPersInfo->setEnabled(false);
        button_showPersInfo->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_showPersInfo, 0, 0, 1, 1);

        button_addStuff = new QPushButton(gridLayoutWidget_2);
        button_addStuff->setObjectName(QStringLiteral("button_addStuff"));
        button_addStuff->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_addStuff, 8, 0, 1, 1);

        button_addPersAbsence = new QPushButton(gridLayoutWidget_2);
        button_addPersAbsence->setObjectName(QStringLiteral("button_addPersAbsence"));
        button_addPersAbsence->setEnabled(false);
        button_addPersAbsence->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_addPersAbsence, 4, 0, 1, 1);

        button_editPersInfo = new QPushButton(gridLayoutWidget_2);
        button_editPersInfo->setObjectName(QStringLiteral("button_editPersInfo"));
        button_editPersInfo->setEnabled(false);
        button_editPersInfo->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_editPersInfo, 1, 0, 1, 1);

        frame_filter_1 = new QFrame(tab_stuff);
        frame_filter_1->setObjectName(QStringLiteral("frame_filter_1"));
        frame_filter_1->setGeometry(QRect(20, 480, 301, 91));
        frame_filter_1->setAutoFillBackground(false);
        frame_filter_1->setFrameShape(QFrame::StyledPanel);
        frame_filter_1->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(frame_filter_1);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 281, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label_2);

        date_historyView = new QDateEdit(gridLayoutWidget);
        date_historyView->setObjectName(QStringLiteral("date_historyView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(date_historyView->sizePolicy().hasHeightForWidth());
        date_historyView->setSizePolicy(sizePolicy3);
        date_historyView->setCursor(QCursor(Qt::PointingHandCursor));
        date_historyView->setDateTime(QDateTime(QDate(2016, 5, 24), QTime(0, 0, 0)));
        date_historyView->setCalendarPopup(true);

        horizontalLayout->addWidget(date_historyView);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayoutWidget_3 = new QWidget(tab_stuff);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(1040, 510, 251, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        updateStaffTable = new QPushButton(verticalLayoutWidget_3);
        updateStaffTable->setObjectName(QStringLiteral("updateStaffTable"));
        updateStaffTable->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(updateStaffTable);

        button_closeWindow = new QPushButton(verticalLayoutWidget_3);
        button_closeWindow->setObjectName(QStringLiteral("button_closeWindow"));
        button_closeWindow->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(button_closeWindow);

        tabWidget->addTab(tab_stuff, QString());
        tab_vacancies = new QWidget();
        tab_vacancies->setObjectName(QStringLiteral("tab_vacancies"));
        tab_vacancies->setCursor(QCursor(Qt::ArrowCursor));
        table_vacancies = new QTableView(tab_vacancies);
        table_vacancies->setObjectName(QStringLiteral("table_vacancies"));
        table_vacancies->setGeometry(QRect(20, 20, 991, 471));
        frame_actions_4 = new QFrame(tab_vacancies);
        frame_actions_4->setObjectName(QStringLiteral("frame_actions_4"));
        frame_actions_4->setGeometry(QRect(1040, 20, 251, 471));
        frame_actions_4->setFrameShape(QFrame::StyledPanel);
        frame_actions_4->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_4 = new QWidget(frame_actions_4);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(9, 10, 231, 141));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        button_openVacancy = new QPushButton(gridLayoutWidget_4);
        button_openVacancy->setObjectName(QStringLiteral("button_openVacancy"));
        button_openVacancy->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(button_openVacancy, 3, 0, 1, 1);

        button_closeVacancy = new QPushButton(gridLayoutWidget_4);
        button_closeVacancy->setObjectName(QStringLiteral("button_closeVacancy"));
        button_closeVacancy->setEnabled(false);
        button_closeVacancy->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(button_closeVacancy, 0, 0, 1, 1);

        line_4 = new QFrame(gridLayoutWidget_4);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_4, 2, 0, 1, 1);

        verticalLayoutWidget = new QWidget(tab_vacancies);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1040, 510, 251, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        updateVacanciesTable = new QPushButton(verticalLayoutWidget);
        updateVacanciesTable->setObjectName(QStringLiteral("updateVacanciesTable"));
        updateVacanciesTable->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(updateVacanciesTable);

        button_closeWindow_3 = new QPushButton(verticalLayoutWidget);
        button_closeWindow_3->setObjectName(QStringLiteral("button_closeWindow_3"));
        button_closeWindow_3->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(button_closeWindow_3);

        tabWidget->addTab(tab_vacancies, QString());
        tab_positions = new QWidget();
        tab_positions->setObjectName(QStringLiteral("tab_positions"));
        tab_positions->setCursor(QCursor(Qt::ArrowCursor));
        table_positions = new QTableView(tab_positions);
        table_positions->setObjectName(QStringLiteral("table_positions"));
        table_positions->setGeometry(QRect(20, 20, 991, 441));
        frame_actions_3 = new QFrame(tab_positions);
        frame_actions_3->setObjectName(QStringLiteral("frame_actions_3"));
        frame_actions_3->setGeometry(QRect(1040, 20, 251, 441));
        frame_actions_3->setFrameShape(QFrame::StyledPanel);
        frame_actions_3->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_3 = new QWidget(frame_actions_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(9, 10, 231, 241));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        button_addPosition = new QPushButton(gridLayoutWidget_3);
        button_addPosition->setObjectName(QStringLiteral("button_addPosition"));
        button_addPosition->setEnabled(false);
        button_addPosition->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(button_addPosition, 5, 0, 1, 1);

        button_editPosition = new QPushButton(gridLayoutWidget_3);
        button_editPosition->setObjectName(QStringLiteral("button_editPosition"));
        button_editPosition->setEnabled(false);
        button_editPosition->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(button_editPosition, 1, 0, 1, 1);

        button_showPositInfo = new QPushButton(gridLayoutWidget_3);
        button_showPositInfo->setObjectName(QStringLiteral("button_showPositInfo"));
        button_showPositInfo->setEnabled(false);
        button_showPositInfo->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(button_showPositInfo, 0, 0, 1, 1);

        button_deletePosition = new QPushButton(gridLayoutWidget_3);
        button_deletePosition->setObjectName(QStringLiteral("button_deletePosition"));
        button_deletePosition->setEnabled(false);
        button_deletePosition->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(button_deletePosition, 2, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 4, 0, 1, 1);

        verticalLayoutWidget_2 = new QWidget(tab_positions);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1040, 480, 251, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        updatePositTable = new QPushButton(verticalLayoutWidget_2);
        updatePositTable->setObjectName(QStringLiteral("updatePositTable"));
        updatePositTable->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(updatePositTable);

        button_closeWindow_2 = new QPushButton(verticalLayoutWidget_2);
        button_closeWindow_2->setObjectName(QStringLiteral("button_closeWindow_2"));
        button_closeWindow_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_closeWindow_2);

        tabWidget->addTab(tab_positions, QString());
        HR_department->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HR_department);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1360, 22));
        menuAsd = new QMenu(menuBar);
        menuAsd->setObjectName(QStringLiteral("menuAsd"));
        HR_department->setMenuBar(menuBar);
        statusBar = new QStatusBar(HR_department);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HR_department->setStatusBar(statusBar);

        menuBar->addAction(menuAsd->menuAction());
        menuAsd->addAction(action);

        retranslateUi(HR_department);

        tabWidget->setCurrentIndex(0);
        button_closeWindow->setDefault(true);
        button_closeWindow_3->setDefault(true);
        button_closeWindow_2->setDefault(true);


        QMetaObject::connectSlotsByName(HR_department);
    } // setupUi

    void retranslateUi(QMainWindow *HR_department)
    {
        HR_department->setWindowTitle(QApplication::translate("HR_department", "\320\232\321\200\321\203\321\227\320\267\320\275\320\270\320\271 \320\273\320\260\320\271\320\275\320\265\321\200. \320\222\321\226\320\264\320\264\321\226\320\273 \320\272\320\260\320\264\321\200\321\226\320\262", Q_NULLPTR));
        actionAsd->setText(QApplication::translate("HR_department", "asd", Q_NULLPTR));
        action->setText(QApplication::translate("HR_department", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("HR_department", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("HR_department", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        tab_stuff->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_printReport->setText(QApplication::translate("HR_department", "\320\240\320\276\320\267\320\264\321\200\321\203\320\272\321\203\320\262\320\260\321\202\320\270 \320\267\320\262\321\226\321\202", Q_NULLPTR));
        button_firePers->setText(QApplication::translate("HR_department", "\320\227\320\262\321\226\320\273\321\214\320\275\320\270\321\202\320\270", Q_NULLPTR));
        button_changePersPosition->setText(QApplication::translate("HR_department", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        button_showPersInfo->setText(QApplication::translate("HR_department", "\320\220\320\275\320\272\320\265\321\202\320\260 \321\204\321\226\320\267. \320\276\321\201\320\276\320\261\320\270", Q_NULLPTR));
        button_addStuff->setText(QApplication::translate("HR_department", "\320\237\321\200\320\270\320\271\320\276\320\274 \320\275\320\260 \321\200\320\276\320\261\320\276\321\202\321\203", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_addPersAbsence->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_addPersAbsence->setText(QApplication::translate("HR_department", "\320\222\321\226\320\264\321\201\321\203\321\202\320\275\321\226\321\201\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_editPersInfo->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_editPersInfo->setText(QApplication::translate("HR_department", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\260\320\275\320\272\320\265\321\202\321\203 \321\204\321\226\320\267. \320\276\321\201\320\276\320\261\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("HR_department", "\320\244\321\226\320\273\321\214\321\202\321\200 ", Q_NULLPTR));
        label_2->setText(QApplication::translate("HR_department", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\270 \320\275\320\260 \320\274\320\276\320\274\320\265\320\275\321\202", Q_NULLPTR));
        updateStaffTable->setText(QApplication::translate("HR_department", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", Q_NULLPTR));
        button_closeWindow->setText(QApplication::translate("HR_department", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_stuff), QApplication::translate("HR_department", "\320\241\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\270", Q_NULLPTR));
        button_openVacancy->setText(QApplication::translate("HR_department", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        button_closeVacancy->setText(QApplication::translate("HR_department", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\262\320\260\320\272\320\260\320\275\321\201\321\226\321\216", Q_NULLPTR));
        updateVacanciesTable->setText(QApplication::translate("HR_department", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", Q_NULLPTR));
        button_closeWindow_3->setText(QApplication::translate("HR_department", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_vacancies), QApplication::translate("HR_department", "\320\222\320\260\320\272\320\260\320\275\321\201\321\226\321\227", Q_NULLPTR));
        button_addPosition->setText(QApplication::translate("HR_department", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_editPosition->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_editPosition->setText(QApplication::translate("HR_department", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", Q_NULLPTR));
        button_showPositInfo->setText(QApplication::translate("HR_department", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\277\320\276\321\201\320\260\320\264\321\203", Q_NULLPTR));
        button_deletePosition->setText(QApplication::translate("HR_department", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", Q_NULLPTR));
        updatePositTable->setText(QApplication::translate("HR_department", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", Q_NULLPTR));
        button_closeWindow_2->setText(QApplication::translate("HR_department", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_positions), QApplication::translate("HR_department", "\320\237\320\276\321\201\320\260\320\264\320\270", Q_NULLPTR));
        menuAsd->setTitle(QApplication::translate("HR_department", "\320\232\321\200\321\203\321\227\320\267\320\275\320\270\320\271 \320\273\320\260\320\271\320\275\320\265\321\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HR_department: public Ui_HR_department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HR_DEPARTMENT_H
