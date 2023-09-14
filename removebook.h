#ifndef REMOVEBOOK_H
#define REMOVEBOOK_H

#include <QWidget>
#include "addbook.h"
#include<QPushButton>

namespace Ui {
class removebook;
}

class removebook : public QWidget
{
    Q_OBJECT

public:

    explicit removebook(QWidget *parent = nullptr);
    ~removebook();
    QPushButton* namePushButton;
    QPushButton* idPushButton;
    bool removeName(books*);
    bool removeId(books*);

private:
    Ui::removebook *ui;

};

#endif // REMOVEBOOK_H
