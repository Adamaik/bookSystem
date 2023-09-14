/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addbook
{
public:
    QSplitter *splitter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *publishlineEdit_2;
    QLineEdit *namelineEdit;
    QLineEdit *publishlineEdit;
    QLineEdit *authorlineEdit;
    QDateEdit *dateEdit;

    void setupUi(QWidget *addbook)
    {
        if (addbook->objectName().isEmpty())
            addbook->setObjectName(QString::fromUtf8("addbook"));
        addbook->resize(400, 300);
        addbook->setMinimumSize(QSize(400, 300));
        addbook->setMaximumSize(QSize(400, 300));
        splitter = new QSplitter(addbook);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(70, 20, 121, 151));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter->addWidget(label_4);
        label_5 = new QLabel(addbook);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 186, 91, 16));
        publishlineEdit_2 = new QLineEdit(addbook);
        publishlineEdit_2->setObjectName(QString::fromUtf8("publishlineEdit_2"));
        publishlineEdit_2->setGeometry(QRect(190, 179, 121, 31));
        namelineEdit = new QLineEdit(addbook);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(190, 20, 121, 31));
        publishlineEdit = new QLineEdit(addbook);
        publishlineEdit->setObjectName(QString::fromUtf8("publishlineEdit"));
        publishlineEdit->setGeometry(QRect(190, 140, 121, 31));
        authorlineEdit = new QLineEdit(addbook);
        authorlineEdit->setObjectName(QString::fromUtf8("authorlineEdit"));
        authorlineEdit->setGeometry(QRect(190, 60, 121, 31));
        dateEdit = new QDateEdit(addbook);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(190, 100, 121, 31));

        retranslateUi(addbook);

        QMetaObject::connectSlotsByName(addbook);
    } // setupUi

    void retranslateUi(QWidget *addbook)
    {
        addbook->setWindowTitle(QCoreApplication::translate("addbook", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        label->setText(QCoreApplication::translate("addbook", "\344\271\246\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("addbook", "\344\275\234\350\200\205", nullptr));
        label_3->setText(QCoreApplication::translate("addbook", "\345\207\272\347\211\210\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("addbook", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_5->setText(QCoreApplication::translate("addbook", "\344\271\246\347\261\215\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addbook: public Ui_addbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
