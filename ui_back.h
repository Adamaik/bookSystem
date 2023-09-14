/********************************************************************************
** Form generated from reading UI file 'back.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACK_H
#define UI_BACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_back
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *back)
    {
        if (back->objectName().isEmpty())
            back->setObjectName(QString::fromUtf8("back"));
        back->resize(737, 164);
        back->setMinimumSize(QSize(737, 164));
        back->setMaximumSize(QSize(737, 164));
        label = new QLabel(back);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\350\213\271\346\226\271 \344\270\255\347\255\211"));
        label->setFont(font);
        lineEdit = new QLineEdit(back);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 30, 521, 51));

        retranslateUi(back);

        QMetaObject::connectSlotsByName(back);
    } // setupUi

    void retranslateUi(QWidget *back)
    {
        back->setWindowTitle(QCoreApplication::translate("back", "\350\277\230\344\271\246", nullptr));
        label->setText(QCoreApplication::translate("back", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class back: public Ui_back {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACK_H
