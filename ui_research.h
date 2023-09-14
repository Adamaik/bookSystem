/********************************************************************************
** Form generated from reading UI file 'research.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESEARCH_H
#define UI_RESEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_research
{
public:
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *research)
    {
        if (research->objectName().isEmpty())
            research->setObjectName(QString::fromUtf8("research"));
        research->resize(737, 164);
        research->setMinimumSize(QSize(737, 164));
        research->setMaximumSize(QSize(737, 164));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-card")));
        research->setWindowIcon(icon);
        lineEdit = new QLineEdit(research);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 521, 51));
        label = new QLabel(research);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\350\213\271\346\226\271 \344\270\255\347\255\211"));
        label->setFont(font);

        retranslateUi(research);

        QMetaObject::connectSlotsByName(research);
    } // setupUi

    void retranslateUi(QWidget *research)
    {
        research->setWindowTitle(QCoreApplication::translate("research", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("research", "<html><head/><body><p><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class research: public Ui_research {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESEARCH_H
