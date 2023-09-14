#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QWidget>
#include <QPushButton>
#include"books.h"

namespace Ui {
class addbook;
}

class addbook : public QWidget
{
    Q_OBJECT

public:
    explicit addbook(QWidget *parent = nullptr);
    ~addbook();
    Ui::addbook *ui;
    QPushButton* pushbutton;

    bool commit(books*);

private slots:


private:


};

#endif // ADDBOOK_H
