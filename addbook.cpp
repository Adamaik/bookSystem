#include "addbook.h"
#include "ui_addbook.h"

addbook::addbook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);
    pushbutton=new QPushButton(this);
    pushbutton->move(180,230);
    pushbutton->setText("提交");
    pushbutton->resize(80,50);
}

addbook::~addbook()
{
    delete ui;
}

bool addbook::commit(books* temp){
    bool output=temp->addBooks(ui->namelineEdit->text().toStdString(),ui->authorlineEdit->text().toStdString(),
                                 ui->dateEdit->date(),ui->publishlineEdit->text().toStdString(),stoi(ui->publishlineEdit_2->text().toStdString()));
    ui->namelineEdit->clear();
    ui->authorlineEdit->clear();
    ui->publishlineEdit->clear();
    this->hide();
    return output;
}
