#include <iostream>
int main()
{
    int a, b;
    std::cout << "Please input two number: " << std::endl;
    std::cin >> a >> b;
    if (a > b) {
        int c = 0;
        c = a;
        a = b;
        b = c;
    }
    while (a <= b) {
        std::cout << "The number is: " << a << std::endl;
        ++a;
    }
    system("pause");
    return 0;
}