#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;

std::istream &test(std::istream &is)
{
    string str;
    // auto old_state = is.rdstate();
    while (is >> str) {
        cout << str << endl;
    }
    is.clear();
    return is;
}

int main()
{
    cout << "please input some string " << endl;
    std::istream &ips = test(cin);
    system("pause");
    return 0;
}