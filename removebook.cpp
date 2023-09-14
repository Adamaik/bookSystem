#include "removebook.h"
#include "ui_removebook.h"

removebook::removebook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::removebook)
{
    ui->setupUi(this);
    namePushButton=new QPushButton(this);
    idPushButton=new QPushButton(this);
    namePushButton->move(40,170);
    namePushButton->setText("按书名删除");
    idPushButton->move(290,170);
    idPushButton->setText("按书籍编号删除");
    namePushButton->resize(141,41);
    idPushButton->resize(145,41);
}

removebook::~removebook()
{
    delete ui;
}

bool removebook::removeName(books*input){
    bool temp=input->removeBooks(ui->nameLineEdit->text().toStdString());
    ui->nameLineEdit->clear();
    ui->idLineEdit->clear();
    if(temp){
        hide();
        return temp;
    }
    else
    {
        return temp;
    }

}
bool removebook::removeId(books*input){
    bool temp=input->removeBooks(input->bookIds[ui->idLineEdit->text().toStdString()]);
    ui->nameLineEdit->clear();
    ui->idLineEdit->clear();
    if(temp){
        hide();
        return temp;
    }
    else
    {
        return temp;
    }
}
