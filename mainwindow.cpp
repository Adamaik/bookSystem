#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QPushButton::QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bookSystem=new books();
    addbookwidget=new addbook();
    removeBookWidget=new removebook();
    borrowWidget=new borrow();
    researchWidget=new research();
    backWidget=new back();
    connect(addbookwidget->pushbutton,SIGNAL(clicked()),this,SLOT(commitbutton()));
    connect(removeBookWidget->namePushButton,SIGNAL(clicked()),this,SLOT(removeName()));
    connect(removeBookWidget->idPushButton,SIGNAL(clicked()),this,SLOT(removeId()));
    connect(researchWidget->nameResearch,SIGNAL(clicked()),this,SLOT(researchName()));
    connect(researchWidget->idResearch,SIGNAL(clicked()),this,SLOT(researchId()));
    connect(researchWidget,SIGNAL(closeSignal()),this,SLOT(closeAction()));
    connect(borrowWidget->pushButton,SIGNAL(clicked()),this,SLOT(borrowBook()));
    connect(backWidget->pushButton,SIGNAL(clicked()),this,SLOT(backBook()));
    this->preDesign();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addbookwidget;
    delete bookSystem;
}

void MainWindow::preDesign(int input)//表格样式设置
{
    tableview=new QTableWidget(this);
    tableview->move(0,25);
    tableview->resize(2000,1500);
    if(input!=0){
        tableview->setRowCount(input);
    }
    else{
        int x=20;
        for(auto i=bookSystem->bookNames.begin();i!=bookSystem->bookNames.end();++i){
            x+=i->second.ids.size();
        }
        tableview->setRowCount(x);
    }
    tableview->setColumnCount(6);
    tableview->setColumnWidth(0,250);
    tableview->setColumnWidth(1,250);
    tableview->setColumnWidth(3,250);
    tableview->setColumnWidth(4,250);
    tableview->setColumnWidth(2,200);
    tableview->setColumnWidth(5,254);
    tableview->setHorizontalHeaderLabels(QStringList() << tr("书名") << tr("书籍编号") << tr("作者")<<tr("出版日期")<<tr("出版社")<<tr("借书读者证号")); // 设置表头文字
    // 禁止编辑单元格
    tableview->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableview->show();
}

void MainWindow::showBooks(){//刷新表格
    preDesign(0);
    int x=0;//行
    for(auto i=bookSystem->bookNames.begin();i!=bookSystem->bookNames.end();++i){
        for(auto j=i->second.ids.begin();j!=i->second.ids.end();++j){
            tableview->setItem(x,0,new QTableWidgetItem(QString::fromStdString(i->second.name)));
            tableview->setItem(x,1,new QTableWidgetItem(QString::fromStdString(i->second.id+j->first)));
            tableview->setItem(x,2,new QTableWidgetItem(QString::fromStdString(i->second.author)));
            tableview->setItem(x,3,new QTableWidgetItem(i->second.date.toString("yyyy-MM-dd")));
            tableview->setItem(x,4,new QTableWidgetItem(QString::fromStdString(i->second.publish)));
            tableview->setItem(x,5,new QTableWidgetItem(QString::fromStdString(j->second=="0"?"未借出":j->second)));
            ++x;
        }
    }
}

void MainWindow::on_actiondawd_triggered()//打开文件
{
    QString filePath = QFileDialog::getOpenFileName(this, "打开文件", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) {
        // 用户点击了取消按钮
        qDebug()<<"用户取消了操作";
    } else {
        // 用户选择了打开路径，可以在这里进行文件的读取操作
        std::string sfilePath = filePath.toStdString();
        if(!bookSystem->read(sfilePath)){
            showMessage("文件打开失败");
        }
        else{
            showBooks();
        }
        qDebug()<<filePath;
    }

}

void MainWindow::showMessage(QString text) {//对话框函数
    QMessageBox messageBox;
    messageBox.setWindowTitle("提示");
        messageBox.setText(text);
        messageBox.setStandardButtons(QMessageBox::Ok);
    messageBox.exec();
}

void MainWindow::on_actionjijji_triggered()//添加书籍窗口
{
    addbookwidget->show();
}

void MainWindow::commitbutton()//添加书籍确认按钮的槽函数
{
    if(!addbookwidget->commit(bookSystem)){
        showMessage("添加失败：书名重复或书名为空");
    }
    else{
        showBooks();
    }
}

void MainWindow::on_actionwqd_triggered()//保存文件
{
    QString filePath = QFileDialog::getSaveFileName(this, "保存文件", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) {
        // 用户点击了取消按钮
        qDebug()<<"用户取消了操作";
    } else {
        // 用户选择了保存路径，可以在这里进行文件的写入操作
        std::string sfilePath = filePath.toStdString();
        bookSystem->save(sfilePath);
        qDebug()<<filePath;
    }
}


void MainWindow::on_actionuhwoh_triggered()//删除书籍
{
    removeBookWidget->show();
}

void MainWindow::removeName(){
    if(removeBookWidget->removeName(bookSystem)){
        showBooks();
    }
    else{
        showMessage("该书名不存在");
    }

}

void MainWindow::removeId(){
    if(removeBookWidget->removeId(bookSystem)){
       showBooks();
    }
    else{
       showMessage("该编号不存在");
    }
}

void MainWindow::on_actiondad_triggered()
{
    researchWidget->show();
}

void MainWindow::researchName(){
    string stemp=researchWidget->button();
    if(bookSystem->bookNames.count(stemp)==0){
        showMessage("书名不存在");
        return;
    }
    book& temp=bookSystem->bookNames[stemp];
    preDesign(temp.ids.size());
    int x=0;
    for(auto j=temp.ids.begin();j!=temp.ids.end();++j){
        tableview->setItem(x,0,new QTableWidgetItem(QString::fromStdString(temp.name)));
        tableview->setItem(x,1,new QTableWidgetItem(QString::fromStdString(temp.id+j->first)));
        tableview->setItem(x,2,new QTableWidgetItem(QString::fromStdString(temp.author)));
        tableview->setItem(x,3,new QTableWidgetItem(temp.date.toString("yyyy-MM-dd")));
        tableview->setItem(x,4,new QTableWidgetItem(QString::fromStdString(temp.publish)));
        tableview->setItem(x,5,new QTableWidgetItem(QString::fromStdString(j->second=="0"?"未借出":j->second)));
        ++x;
    }
}

void MainWindow::researchId(){
    string stemp=researchWidget->button();
    string stemp1=stemp.substr(0,6);
    string stemp2=stemp.substr(6,4);
    book& temp=bookSystem->bookNames[bookSystem->bookIds[stemp1]];
    preDesign(1);
    tableview->setItem(0,0,new QTableWidgetItem(QString::fromStdString(temp.name)));
    tableview->setItem(0,1,new QTableWidgetItem(QString::fromStdString(stemp)));
    tableview->setItem(0,2,new QTableWidgetItem(QString::fromStdString(temp.author)));
    tableview->setItem(0,3,new QTableWidgetItem(temp.date.toString("yyyy-MM-dd")));
    tableview->setItem(0,4,new QTableWidgetItem(QString::fromStdString(temp.publish)));
    tableview->setItem(0,5,new QTableWidgetItem(QString::fromStdString(temp.ids[stemp2]=="0"?"未借出":temp.ids[stemp2])));
}

void MainWindow::closeAction(){
    showBooks();
}

void MainWindow::on_currentChange(const QModelIndex &current, const QModelIndex &previous)
{		//设置选择当前行
    qDebug()<<current.row()<<" "<<previous.column();
}

void MainWindow::on_actionji_triggered()
{
    borrowWidget->show();
}

void MainWindow::borrowBook(){
    if(borrowWidget->_borrowBook(bookSystem)){
        showMessage("借书成功");
    }
    else{
        showMessage("借书失败:编号不存在或已借出");
    }
    showBooks();
}

void MainWindow::on_actionsd_triggered()
{
    backWidget->show();
}


void MainWindow::backBook(){
    if(backWidget->_backBook(bookSystem)){
        showMessage("还书成功");
    }
    else{
        showMessage("还书失败:编号不存在或未借出");
    }
    showBooks();
}

