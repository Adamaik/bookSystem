#ifndef BORROW_H
#define BORROW_H

#include <QWidget>
#include"research.h"
#include<QPushButton>
#include <QFileDialog>

namespace Ui {
class borrow;
}

class borrow : public QWidget
{
    Q_OBJECT

public:
    explicit borrow(QWidget *parent = nullptr);
    bool _borrowBook(books*);
    ~borrow();
    QPushButton* pushButton;

private slots:

private:
    Ui::borrow *ui;
};

#endif // BORROW_H
