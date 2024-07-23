/********************************************************************************
** Form generated from reading UI file 'FrequencyWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCYWINDOW_H
#define UI_FREQUENCYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrequencyWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FrequencyWindowClass)
    {
        if (FrequencyWindowClass->objectName().isEmpty())
            FrequencyWindowClass->setObjectName("FrequencyWindowClass");
        FrequencyWindowClass->resize(600, 400);
        menuBar = new QMenuBar(FrequencyWindowClass);
        menuBar->setObjectName("menuBar");
        FrequencyWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FrequencyWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        FrequencyWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FrequencyWindowClass);
        centralWidget->setObjectName("centralWidget");
        FrequencyWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FrequencyWindowClass);
        statusBar->setObjectName("statusBar");
        FrequencyWindowClass->setStatusBar(statusBar);

        retranslateUi(FrequencyWindowClass);

        QMetaObject::connectSlotsByName(FrequencyWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *FrequencyWindowClass)
    {
        FrequencyWindowClass->setWindowTitle(QCoreApplication::translate("FrequencyWindowClass", "FrequencyWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrequencyWindowClass: public Ui_FrequencyWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCYWINDOW_H
