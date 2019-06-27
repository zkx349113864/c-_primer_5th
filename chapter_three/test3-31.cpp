#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    int intArr[10];
    int arrb[10];
    for (size_t a = 0; a != 10; ++a) {
        intArr[a] = a;
        cout << intArr[a] << " ";
    }
    // 3.32
    cout << "\n" << endl;
    cout << "arrb element is ";
    for (size_t b = 0; b != 10; ++b) {
        arrb[b] = intArr[b];
        cout << arrb[b] << " ";
    }
    cout << "\n" << endl;
    cout << "vector ivec content is ";
    vector<int> ivec(10, 0);
    for (int i = 0; i != 10; ++i) {
        ivec[i] = intArr[i];
        cout << ivec[i] << " ";
    }
    system("pause");
    return 0;
}