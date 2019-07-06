#include <iostream>
#include <vector>
#include <list>
#include <string>
using std::string;
using std::list;
using std::vector;
using std::cin;
using std::cout; using std::endl;

string compare_container(const list<int> &ilist, const vector<int> &ivec)
{
    vector<int> temporary(ilist.begin(), ilist.end());
    // vector<int> temporary;
    // temporary.assign(ilist.begin(), ilist.end());
    if (temporary == ivec) {
        return "equal";
    } else if (temporary < ivec) {
        return "small";
    } else if (temporary > ivec) {
        return "bigger";
    }
}

int main()
{
    vector<int> ivec1{1, 2, 3, 4};
    vector<int> ivec2{1, 2, 3, 4, 5};
    list<int> intlist{1, 2, 3, 4, 5};
    string result;
    string isEqual;
    result = ivec1 < ivec2 ? "true" : "false";
    isEqual = compare_container(intlist, ivec2);
    cout << result << endl;
    cout << isEqual << endl;
    system("pause");
    return 0;
}