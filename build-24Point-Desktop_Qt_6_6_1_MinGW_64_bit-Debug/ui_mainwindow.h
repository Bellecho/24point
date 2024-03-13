/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *teach;
    QPushButton *Algo_Intro;
    QPushButton *start;
    QPushButton *errorSet;
    QPushButton *other;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 524);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 60, 161, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        teach = new QPushButton(layoutWidget);
        teach->setObjectName("teach");
        teach->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-color: rgb(4, 4, 4);"));

        verticalLayout->addWidget(teach);

        Algo_Intro = new QPushButton(layoutWidget);
        Algo_Intro->setObjectName("Algo_Intro");

        verticalLayout->addWidget(Algo_Intro);

        start = new QPushButton(layoutWidget);
        start->setObjectName("start");

        verticalLayout->addWidget(start);

        errorSet = new QPushButton(layoutWidget);
        errorSet->setObjectName("errorSet");

        verticalLayout->addWidget(errorSet);

        other = new QPushButton(layoutWidget);
        other->setObjectName("other");

        verticalLayout->addWidget(other);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        teach->setText(QCoreApplication::translate("MainWindow", "\346\225\231\347\250\213", nullptr));
        Algo_Intro->setText(QCoreApplication::translate("MainWindow", "\347\256\227\346\263\225\344\273\213\347\273\215", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        errorSet->setText(QCoreApplication::translate("MainWindow", "\351\224\231\351\242\230\346\234\254", nullptr));
        other->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
