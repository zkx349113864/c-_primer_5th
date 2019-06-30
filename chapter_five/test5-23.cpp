#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::runtime_error;
int main()
{
    int v1, v2, result;
    while (cin >> v1 >> v2) {
        try {
            if (v2 == 0) {
                throw runtime_error("the number must bigger than zero");
            }
            result = v1 / v2;
            cout << "The result is " << result << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry Again ? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break;
            }
        }
    }
    
    system("pause");
    return 0;
}