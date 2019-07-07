#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

int sum(const vector<string> &v)
{
    int sum = 0;
    for(auto &s:v) {
        sum += stoi(s);
    }
    return sum;
}

float sum_f(const vector<string> &v)
{
    float sum = 0;
    for(auto &s : v) {
        sum += stof(s);
    }
    return sum;
}

int main()
{
    vector<string> svec{"0","1","2", "3", "4", "5"};
    cout << sum(svec) << endl;
    cout << sum_f(svec) << endl;
    system("pause");
    return 0;
}