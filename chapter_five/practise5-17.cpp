#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> ivec1;
    vector<int> ivec2;
    int val1;
    int val2;
    string result = "same";
    while (cin >> val1 && val1 != 999) {
        ivec1.push_back(val1);
    }
    while (cin >> val2 && val2 != 999) {
        ivec2.push_back(val2);
    }
    decltype(ivec1.size()) length = ivec1.size() <= ivec2.size() ? ivec1.size() : ivec2.size();
    for (decltype(ivec1.size()) index = 0; index < length; ++index) {
        if (ivec1[index] == ivec2[index]) {
            ;
        } else {
            result = "not same";
        }
    }
    cout << "the two vector object is " << result << endl;
    system("pause");
    return 0;
}