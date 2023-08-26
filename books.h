#ifndef BOOKS_H
#define BOOKS_H
#include"book.h"
#include<fstream>
using std::map;

class books
{
public:
    map<string,string>bookIds;
    map<string,book>bookNames;
    books();
    bool addBooks(string name,string author,QDate date,string publish,int number=0);
    void addBook(string name,int number);
    bool removeBooks(string name);
    bool removeBook(string name,string id);
    void save(string fileName);
    bool read(string fileName);
    void clear();
};

#endif // BOOKS_H
