#include "borrow.h"
#include "ui_borrow.h"

borrow::borrow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::borrow)
{
    ui->setupUi(this);
    pushButton=new QPushButton(this);
    pushButton->move(310,180);
    pushButton->resize(131,41);
    pushButton->setText("确认");
}

borrow::~borrow()
{
    delete ui;
}
bool borrow::_borrowBook(books* bookSystem){
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")return false;
    bool temp= (bookSystem->bookNames[bookSystem->bookIds[ui->lineEdit->text().toStdString().substr(0,6)]]).borrow((ui->lineEdit->text()).toStdString().substr(6,4),(ui->lineEdit_2->text()).toStdString());
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    return temp;
}
