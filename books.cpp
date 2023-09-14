#include "books.h"
#include<random>
#include <iomanip>
#include<QDebug>
#include<QApplication>
using std::pair;
using std::string;

const string EMPTY="0";//图书未借出

books::books():bookIds({}),bookNames({})
{
}



bool books::addBooks(string name,string author,QDate date,string publish,int number){
    if(name=="")return false;
    if(bookNames.count(name)==1){
        return false;
    }
    std::random_device rd;
    int iid=rd()%1000000;
    while(bookIds.count(std::to_string(iid))!=0){
        iid=rd()%1000000;
    }
    string id=std::to_string(iid);
    bookNames.insert(pair<string,book>(name,book(name,id,author,date,publish)));
    bookIds.insert(pair<string,string>(id,name));
    addBook(name,number);
    qDebug()<<"cilcked!";
    return true;
}

void books::addBook(string name,int number){
    for(int i=0;i<number;++i){
        std::random_device rd;
        int iid=rd()%10000;
        while(bookNames[name].ids.count(std::to_string(iid))!=0){
            iid=rd()%10000;
        }
        std::stringstream ss;
        ss<<std::setw(4)<<std::setfill('0')<<iid;
        string id;
        ss>>id;
        bookNames[name].ids.insert(pair<string,string>(id,EMPTY));
    }
}

bool books::removeBook(string name, string id){
    if(bookNames[name].ids.count(id)==0){
        return false;
    }
    bookNames[name].ids.erase(id);
    return true;
}

bool books::removeBooks(string name){
    if(bookNames.count(name)==0)return false;
    bookIds.erase(bookNames[name].id);
    bookNames.erase(name);
    return true;
}

void books::clear(){
    bookIds.clear();
    bookNames.clear();
}

void books::save(string fileName){
    std::stringstream ss;
    ss<<"书名,书籍编号,作者,出版日期,出版社,藏书编号\n";
    for(auto i=bookNames.begin();i!=bookNames.end();++i){
        i->second.save(ss);
        ss<<"\n";
    }
    std::fstream outfile;
    outfile.open(fileName,std::ios::out|std::ios::trunc);
    outfile<<ss.str();
    outfile.close();
}

bool books::read(string fileName){
    std::fstream file;
    file.open(fileName,std::ios::in);
    if(!file.is_open())return false;
    string stemp;
    std::getline(file,stemp);
    while(std::getline(file,stemp)){
        book btemp;
        btemp.read(stemp);
        bookNames.insert(pair<string,book>(btemp.name,btemp));
        bookIds.insert(pair<string,string>(btemp.id,btemp.name));
    }
    return true;
}



















