#include "back.h"
#include "ui_back.h"

back::back(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::back)
{
    ui->setupUi(this);
    pushButton=new QPushButton(this);
    pushButton->move(310,110);
    pushButton->resize(131,41);
    pushButton->setText("确认");
}

back::~back()
{
    delete ui;
}

bool back::_backBook(books* bookSystem){
    if(ui->lineEdit->text()=="")return false;
    bool temp= (bookSystem->bookNames[bookSystem->bookIds[ui->lineEdit->text().toStdString().substr(0,6)]]).back((ui->lineEdit->text()).toStdString().substr(6,4));
    ui->lineEdit->clear();
    return temp;
}
