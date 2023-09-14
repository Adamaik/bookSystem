#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QDebug>
#include <QPushButton>
#include <QFileDialog>
#include"back.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showMessage(QString);

private slots:
    void on_currentChange(const QModelIndex &current, const QModelIndex &previous);//记录点击单元格坐标
    void closeAction();
    void on_actiondawd_triggered();
    void commitbutton();
    void on_actionjijji_triggered();

    void on_actionwqd_triggered();

    void on_actionuhwoh_triggered();
    void removeName();
    void removeId();
    void researchName();
    void researchId();
    void on_actiondad_triggered();

    void on_actionji_triggered();
    void borrowBook();
    void backBook();

    void on_actionsd_triggered();

private:
    research* researchWidget;
    books* bookSystem;
    Ui::MainWindow *ui;
    void preDesign(int input=0);
    void openfile();
    void showBooks();
    addbook* addbookwidget;
    QTableWidget* tableview;
    removebook*removeBookWidget;
    borrow* borrowWidget;
    back* backWidget;

};
#endif // MAINWINDOW_H
