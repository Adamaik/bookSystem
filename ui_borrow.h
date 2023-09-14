/********************************************************************************
** Form generated from reading UI file 'borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_H
#define UI_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrow
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QWidget *borrow)
    {
        if (borrow->objectName().isEmpty())
            borrow->setObjectName(QString::fromUtf8("borrow"));
        borrow->resize(737, 250);
        borrow->setMinimumSize(QSize(737, 250));
        borrow->setMaximumSize(QSize(737, 250));
        lineEdit = new QLineEdit(borrow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 30, 481, 51));
        label = new QLabel(borrow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 171, 51));
        lineEdit_2 = new QLineEdit(borrow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 100, 481, 51));
        label_2 = new QLabel(borrow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 100, 171, 51));

        retranslateUi(borrow);

        QMetaObject::connectSlotsByName(borrow);
    } // setupUi

    void retranslateUi(QWidget *borrow)
    {
        borrow->setWindowTitle(QCoreApplication::translate("borrow", "\345\200\237\344\271\246", nullptr));
        label->setText(QCoreApplication::translate("borrow", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("borrow", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\267\350\276\223\345\205\245\350\257\273\350\200\205\350\257\201\345\217\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrow: public Ui_borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_H
