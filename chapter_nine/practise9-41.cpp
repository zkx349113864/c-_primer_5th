#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <forward_list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;
using std::forward_list;
using std::advance;

int main()
{
    vector<char> cvec = {'h', 'e', 'l', 'l', 'o', '!'};
    string str(cvec.begin(), cvec.end());
    cout << str << endl;
    system("pause");
    return 0;
}