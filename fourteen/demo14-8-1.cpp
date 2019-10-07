#include <iostream>
#include <string>
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cerr;

class PrintString {
public:
    PrintString(ostream &o = cout, char c = ' '): os(o), sep(c) {}
    void operator()(const string &s) const { os << s << sep; }
private:
    ostream &os;        // 用于写入的目的流
    char sep;           // 用于将不同输出隔开的字符
};

int main()
{
    string s("hello");
    PrintString printer;        // 使用默认值， 打印到cout
    printer(s);                 // 在cout中打印s，后面跟一个空格
    PrintString errors(cerr, '\n');
    errors(s);                  // 在cerr中打印s，后面跟一个换行符
    system("pause");
    return 0;
}