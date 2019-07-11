#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void captureInt()
{
    int val1 = 10;
    auto res = [&val1]() -> bool {
        while (val1 != 0) {
            --val1;
        }
        return (val1 == 0);

    };
    cout << res() << endl;
    cout << val1 << endl;
}

int main()
{
    captureInt();
    system("pause");
    return 0;
}