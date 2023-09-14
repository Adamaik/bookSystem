/********************************************************************************
** Form generated from reading UI file 'removebook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEBOOK_H
#define UI_REMOVEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removebook
{
public:
    QLineEdit *nameLineEdit;
    QLineEdit *idLineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *removebook)
    {
        if (removebook->objectName().isEmpty())
            removebook->setObjectName(QString::fromUtf8("removebook"));
        removebook->resize(463, 284);
        removebook->setMinimumSize(QSize(463, 284));
        removebook->setMaximumSize(QSize(463, 284));
        nameLineEdit = new QLineEdit(removebook);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(20, 100, 191, 41));
        idLineEdit = new QLineEdit(removebook);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(260, 100, 171, 41));
        label = new QLabel(removebook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 121, 61));
        label_2 = new QLabel(removebook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 20, 141, 61));

        retranslateUi(removebook);

        QMetaObject::connectSlotsByName(removebook);
    } // setupUi

    void retranslateUi(QWidget *removebook)
    {
        removebook->setWindowTitle(QCoreApplication::translate("removebook", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        label->setText(QCoreApplication::translate("removebook", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\271\246\345\220\215</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("removebook", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\271\246\347\261\215\347\274\226\345\217\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removebook: public Ui_removebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEBOOK_H
