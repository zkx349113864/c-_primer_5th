#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::begin; using std::end;
int main()
{
    int iarr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 4, 6};
    if (iarr == arr2) {
        cout << "same" << endl;
    }
    if (iarr != arr2) {
        cout << "not same" << endl;
    }
    vector<string> svec = {"hello", "world", "hh"};
    vector<string> svec2 = {"hello", "world", "hhh"};
    if (svec == svec2) {
        cout << "vector is same" << endl;
    } else {
        cout << "vector is not same" << endl;
    }
    system("pause");
    return 0;
}