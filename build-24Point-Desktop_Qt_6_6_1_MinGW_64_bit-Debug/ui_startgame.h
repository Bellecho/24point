/********************************************************************************
** Form generated from reading UI file 'startgame.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTGAME_H
#define UI_STARTGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartGame
{
public:

    void setupUi(QWidget *StartGame)
    {
        if (StartGame->objectName().isEmpty())
            StartGame->setObjectName("StartGame");
        StartGame->resize(400, 300);

        retranslateUi(StartGame);

        QMetaObject::connectSlotsByName(StartGame);
    } // setupUi

    void retranslateUi(QWidget *StartGame)
    {
        StartGame->setWindowTitle(QCoreApplication::translate("StartGame", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartGame: public Ui_StartGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTGAME_H
