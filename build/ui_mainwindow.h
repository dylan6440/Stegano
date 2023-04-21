/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit_PassWord;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_Get_Message;
    QPushButton *pushButton_GetFile;
    QTextEdit *textEdit_Message;
    QPushButton *pushButton_Get_Directory;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(296, 357);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit_PassWord = new QTextEdit(centralwidget);
        textEdit_PassWord->setObjectName(QStringLiteral("textEdit_PassWord"));
        textEdit_PassWord->setGeometry(QRect(30, 100, 231, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 31, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 80, 71, 20));
        pushButton_Get_Message = new QPushButton(centralwidget);
        pushButton_Get_Message->setObjectName(QStringLiteral("pushButton_Get_Message"));
        pushButton_Get_Message->setGeometry(QRect(100, 140, 89, 25));
        pushButton_GetFile = new QPushButton(centralwidget);
        pushButton_GetFile->setObjectName(QStringLiteral("pushButton_GetFile"));
        pushButton_GetFile->setGeometry(QRect(30, 40, 89, 25));
        textEdit_Message = new QTextEdit(centralwidget);
        textEdit_Message->setObjectName(QStringLiteral("textEdit_Message"));
        textEdit_Message->setGeometry(QRect(30, 170, 231, 131));
        textEdit_Message->setReadOnly(true);
        pushButton_Get_Directory = new QPushButton(centralwidget);
        pushButton_Get_Directory->setObjectName(QStringLiteral("pushButton_Get_Directory"));
        pushButton_Get_Directory->setGeometry(QRect(170, 40, 89, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 20, 131, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 296, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        pushButton_Get_Message->setText(QApplication::translate("MainWindow", "Get message", Q_NULLPTR));
        pushButton_GetFile->setText(QApplication::translate("MainWindow", "GetFile", Q_NULLPTR));
        pushButton_Get_Directory->setText(QApplication::translate("MainWindow", "Directory", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Directory Message", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
