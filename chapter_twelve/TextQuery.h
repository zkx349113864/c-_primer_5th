#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <memory>
#include <map>
#include <set>
using std::vector;
using std::string;
using std::ifstream;
using std::shared_ptr;
using std::map;
using std::set;

class TextQuery {
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream&);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;  // 输入文件
    map<string, shared_ptr<set<line_no>>> wm;
};

#endif