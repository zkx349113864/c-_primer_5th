#include <iostream>

int main()
{
    int a, b;
    std::cout << "Please in input two number: " << std::endl;
    std::cin >> a >> b;
    while (a <= b) {
        std::cout << "The number is: " << a << std::endl;
        ++a;
    }
    system("pause");
    return 0;
}