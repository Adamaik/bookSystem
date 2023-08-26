#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<map>
#include<vector>
#include <qdatetime.h>
#include <sstream>
using std::string;

class book
{
public:
    std::string name;
    std::string id;
    std::string author;
    QDate date;
    std::string publish;
    std::map<std::string,std::string>ids;
    //需要三种标记：读者证，未借出，不存在
    book(string name,string id,string author,QDate date,string publish,const std::map<string,string>&ids={}):name(name),id(id),
        author(author),date(date),publish(publish),ids(ids){}
    book(const std::map<string,string>&ids={}):ids(ids){}
    void save(std::stringstream&);
    void read(std::string&);
    bool borrow(string book_id,string card_id);
    std::vector<string> split(const string &s, const string &seperator);
    bool back(string book_id);
};

#endif // BOOK_H
