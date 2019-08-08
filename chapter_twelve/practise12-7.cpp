#include <iostream>
#include <vector>
#include <memory>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> func1()
{
    shared_ptr<vector<int>> p = make_shared<vector<int>>();
    return p;
}

shared_ptr<vector<int>> func2()
{
    shared_ptr<vector<int>> q = func1();
    int val;
    while(cin >> val)
    {
        (*q).push_back(val);
    }
    return q;
}

void func3()
{
    shared_ptr<vector<int>> r = func2();
    for(int i = 0; i != (*r).size(); ++i)
    {
        cout << (*r)[i] << " ";
    }
    cout << endl;
}

int main()
{
    func3();
    
    system("pause");
    return 0;
}