/********************************************************************************
** Form generated from reading UI file 'RankingWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKINGWINDOW_H
#define UI_RANKINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankingWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RankingWindowClass)
    {
        if (RankingWindowClass->objectName().isEmpty())
            RankingWindowClass->setObjectName("RankingWindowClass");
        RankingWindowClass->resize(600, 400);
        menuBar = new QMenuBar(RankingWindowClass);
        menuBar->setObjectName("menuBar");
        RankingWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RankingWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        RankingWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(RankingWindowClass);
        centralWidget->setObjectName("centralWidget");
        RankingWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RankingWindowClass);
        statusBar->setObjectName("statusBar");
        RankingWindowClass->setStatusBar(statusBar);

        retranslateUi(RankingWindowClass);

        QMetaObject::connectSlotsByName(RankingWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *RankingWindowClass)
    {
        RankingWindowClass->setWindowTitle(QCoreApplication::translate("RankingWindowClass", "RankingWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankingWindowClass: public Ui_RankingWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKINGWINDOW_H
