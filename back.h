#ifndef BACK_H
#define BACK_H

#include <QWidget>
#include"borrow.h"

namespace Ui {
class back;
}

class back : public QWidget
{
    Q_OBJECT

public:
    explicit back(QWidget *parent = nullptr);
    QPushButton* pushButton;
    bool _backBook(books*);
    ~back();

private:
    Ui::back *ui;
};

#endif // BACK_H
