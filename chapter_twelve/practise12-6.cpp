#include <iostream>
#include <vector>
#include <memory>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> *func()
{
    vector<int> *p = new vector<int>;
    return p;
    delete p;
}

vector<int> *func2()
{
    vector<int> *q = func();
    int val;
    while (cin >> val)
    {
        (*q).push_back(val);
    }
    return q;
    delete q;
}

void func3()
{
    vector<int> *r = func2();
    for(int i = 0; i !=(*r).size(); ++i)
    {
        cout << (*r)[i] << " ";
    }
    cout << endl;
    delete r;
}

int main()
{
    func3();
    system("pause");
    return 0;
}