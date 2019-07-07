#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
    string numbers("0123456789");
    string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string str("ab2c3d7R4E6");
    cout << "numberic characters: " << endl;
    for (string::size_type i = 0; (i = str.find_first_of(numbers, i)) < string::npos; ++i) {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << "alphabetic characters: " << endl;
    for(string::size_type i = 0; (i = str.find_first_of(alphabet, i)) != string::npos; ++i) {
        cout << str[i] << " ";
    }
    cout << endl;

    cout << "numberic characters: " << endl;
    for (string::size_type i = 0; (i = str.find_first_not_of(alphabet, i)) < string::npos; ++i) {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << "alphabetic characters: " << endl;
    for(string::size_type i = 0; (i = str.find_first_not_of(numbers, i)) != string::npos; ++i) {
        cout << str[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}