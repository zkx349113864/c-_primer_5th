#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    int grade;
    string result("invalid");
    cout << "Please input a number" << endl;
    while (cin >> grade) {
        if (grade <= 100) {
            /* result = grade >= 90 ? "high pass" : 
                     grade > 75 ? "pass" : 
                     grade >= 60 ?  "low pass" : "fail"; */
            if (grade >= 90) {
                result = "high pass";
            } else if (grade > 75) {
                result = "pass";
            } else if (grade >= 60) {
                result = "low pass";
            } else {
                result = "fail";
            }
        }
        cout << result << endl;
    }
    system("pause");
    return 0;
}