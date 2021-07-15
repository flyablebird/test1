/********************************************************************************
** Form generated from reading UI file 'testCheatData.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCHEATDATA_H
#define UI_TESTCHEATDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testCheatDataClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addCharactor;
    QPushButton *newCharactor;
    QPushButton *deleteCharactor;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testCheatDataClass)
    {
        if (testCheatDataClass->objectName().isEmpty())
            testCheatDataClass->setObjectName(QString::fromUtf8("testCheatDataClass"));
        testCheatDataClass->resize(600, 400);
        centralWidget = new QWidget(testCheatDataClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addCharactor = new QPushButton(centralWidget);
        addCharactor->setObjectName(QString::fromUtf8("addCharactor"));

        verticalLayout->addWidget(addCharactor);

        newCharactor = new QPushButton(centralWidget);
        newCharactor->setObjectName(QString::fromUtf8("newCharactor"));

        verticalLayout->addWidget(newCharactor);

        deleteCharactor = new QPushButton(centralWidget);
        deleteCharactor->setObjectName(QString::fromUtf8("deleteCharactor"));

        verticalLayout->addWidget(deleteCharactor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        testCheatDataClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testCheatDataClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        testCheatDataClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testCheatDataClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testCheatDataClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testCheatDataClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testCheatDataClass->setStatusBar(statusBar);

        retranslateUi(testCheatDataClass);

        QMetaObject::connectSlotsByName(testCheatDataClass);
    } // setupUi

    void retranslateUi(QMainWindow *testCheatDataClass)
    {
        testCheatDataClass->setWindowTitle(QCoreApplication::translate("testCheatDataClass", "testCheatData", nullptr));
        addCharactor->setText(QCoreApplication::translate("testCheatDataClass", "add", nullptr));
        newCharactor->setText(QCoreApplication::translate("testCheatDataClass", "new", nullptr));
        deleteCharactor->setText(QCoreApplication::translate("testCheatDataClass", "delete", nullptr));
        pushButton->setText(QCoreApplication::translate("testCheatDataClass", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("testCheatDataClass", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("testCheatDataClass", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("testCheatDataClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testCheatDataClass: public Ui_testCheatDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCHEATDATA_H
