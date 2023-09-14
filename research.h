#ifndef RESEARCH_H
#define RESEARCH_H

#include <QWidget>
#include"removebook.h"
#include<string>
#include<QPushButton>

using std::string;

namespace Ui {
class research;
}

class research : public QWidget{
                     Q_OBJECT

                 public:
                          explicit research(QWidget *parent = nullptr);
~research();
QPushButton*nameResearch;
QPushButton*idResearch;
string button();
private:
Ui::research *ui;

signals:
void closeSignal();

protected:
void closeEvent(QCloseEvent *event) override;
};

#endif // RESEARCH_H
