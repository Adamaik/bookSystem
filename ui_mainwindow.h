/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionwqd;
    QAction *actionjijji;
    QAction *actionuhwoh;
    QAction *actiondawd;
    QAction *actiondad;
    QAction *actionji;
    QAction *actionsd;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 1000);
        MainWindow->setMinimumSize(QSize(1500, 1000));
        MainWindow->setMaximumSize(QSize(1500, 1000));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        actionwqd = new QAction(MainWindow);
        actionwqd->setObjectName(QString::fromUtf8("actionwqd"));
        actionjijji = new QAction(MainWindow);
        actionjijji->setObjectName(QString::fromUtf8("actionjijji"));
        actionuhwoh = new QAction(MainWindow);
        actionuhwoh->setObjectName(QString::fromUtf8("actionuhwoh"));
        actiondawd = new QAction(MainWindow);
        actiondawd->setObjectName(QString::fromUtf8("actiondawd"));
        actiondad = new QAction(MainWindow);
        actiondad->setObjectName(QString::fromUtf8("actiondad"));
        actionji = new QAction(MainWindow);
        actionji->setObjectName(QString::fromUtf8("actionji"));
        actionsd = new QAction(MainWindow);
        actionsd->setObjectName(QString::fromUtf8("actionsd"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionwqd);
        menu->addAction(actiondawd);
        menu_2->addAction(actionjijji);
        menu_2->addAction(actionuhwoh);
        menu_2->addAction(actionji);
        menu_2->addAction(actionsd);
        menu_3->addAction(actiondad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionwqd->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        actionjijji->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        actionuhwoh->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        actiondawd->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actiondad->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\220\234\347\264\242\346\241\206", nullptr));
        actionji->setText(QCoreApplication::translate("MainWindow", "\345\200\237\344\271\246", nullptr));
        actionsd->setText(QCoreApplication::translate("MainWindow", "\350\277\230\344\271\246", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
