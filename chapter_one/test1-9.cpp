#include <iostream>

int main()
{
    int sum = 0, first = 50;
    while (first <= 100) {
        sum += first;
        ++first;
    }
    std::cout << "The result is " << sum << std::endl;
    system("pause");
    return 0;
}