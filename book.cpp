#include "book.h"
using std::vector;

const string EMPTY="0";//未借出

void book::save(std::stringstream& ss){
    ss<<name<<',';
    ss<<id<<',';
    ss<<author<<',';
    ss<<date.year()<<'/'<<date.month()<<'/'<<date.day()<<',';
    ss<<publish<<',';
    for(auto i=ids.begin();i!=ids.end();++i){
        ss<<i->first<<'/'<<i->second<<'/';
    }
}

vector<string> book::split(const string &s, const string &seperator){
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){
        //找到字符串中首个不等于分隔符的字母；
        int flag = 0;
        while(i != s.size() && flag == 0){
            flag = 1;
            for(string_size x = 0; x < seperator.size(); ++x){
                if(s[i] == seperator[x]){
                    ++i;
                    flag = 0;
                    break;
                }
            }
        }

        //找到又一个分隔符，将两个分隔符之间的字符串取出；
        flag = 0;
        string_size j = i;
        while(j != s.size() && flag == 0){
            for(string_size x = 0; x < seperator.size(); ++x)
                if(s[j] == seperator[x]){
                    flag = 1;
                    break;
                }
            if(flag == 0)
                ++j;
        }
        if(i != j){
            result.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return result;
}

void book::read(std::string& ss){
    std::vector<string>vtemp,vtemp2;
    vtemp=split(ss,",");
    vtemp2=split(vtemp[3],"/");
    book::date.setDate(stoi(vtemp2[0]),stoi(vtemp2[1]),stoi(vtemp2[2]));
    name=vtemp[0];
    id=vtemp[1];
    author=vtemp[2];
    publish=vtemp[4];
    if(vtemp.size()>5){
        vtemp2=split(vtemp[5],"/");
        for(int i=0;i<vtemp2.size();i+=2){
            ids.insert(std::pair<string,string>(vtemp2[i],vtemp2[i+1]));
        }
    }
}

bool book::borrow(string book_id,string card_id){
    if(book_id=="")return false;
    if(ids.count(book_id)==0)return false;
    if(ids[book_id]!=EMPTY)return false;
    ids[book_id]=card_id;
    return true;
}

bool book::back(string book_id){
    if(ids.count(book_id)==0)return false;
    if(ids[book_id]==EMPTY)return false;
    ids[book_id]=EMPTY;
    return true;
}

