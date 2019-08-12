#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <set>
using std::vector;
using std::string;
using std::ostream;
using std::shared_ptr;
using std::set;

class QueryResult {
    friend ostream &print(ostream&, const QueryResult&);
public:
    using line_no = vector<string>::size_type;
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f): sought(s), lines(p), file(f) {}

private:
    string sought;                              // 查询单词
    shared_ptr<set<line_no>> lines;             // 出现的行号
    shared_ptr<vector<string>> file;            // 输入文件
};

#endif