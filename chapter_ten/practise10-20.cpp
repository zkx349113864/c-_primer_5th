#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void countIF(vector<string> &svec, int len)
{
    auto res = count_if(svec.begin(), svec.end(), [len](string str){
        return str.size() > len;
    });
    cout << res << endl;
}

int main()
{
    vector<string> svecList{"hesldf", "asdfasdfasdf", "asdfafasfasfaw", "eqrgfbda", "adfaefasfaweewaewf", "asdfa", "ass", "afafawfew"};
    countIF(svecList, 6);
    system("pause");
    return 0;
}