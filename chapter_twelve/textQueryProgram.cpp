#include "TextQuery.h"
// #include "QueryResult.h"
#include <iostream>
#include <fstream>
using std::ifstream;
using std::cin;
using std::cout; using std::endl;

void runQueries(ifstream &infile)
{
    // infile 是一个ifstream, 指向我们要处理的文件
    TextQuery tq(infile);
    while (true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        // 指向查询并打印结果
        print(cout, tq.query(s)) << endl;
    }
}

int main()
{
    ifstream file("textQuery.txt");
    runQueries(file);
    system("pause");
    return 0;
}