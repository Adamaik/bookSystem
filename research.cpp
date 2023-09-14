#include "research.h"
#include "ui_research.h"

research::research(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::research)
{
    ui->setupUi(this);
    nameResearch=new QPushButton(this);
    idResearch=new QPushButton(this);
    nameResearch->resize(181,41);
    idResearch->resize(181,41);
    nameResearch->move(160,90);
    idResearch->move(420,90);
    nameResearch->setText("按书名搜索");
    idResearch->setText("按编号搜索");
}

research::~research()
{
    delete ui;
}

string research::button(){
    return ui->lineEdit->text().toStdString();
}

void research::closeEvent(QCloseEvent *event){
    emit closeSignal();
}
