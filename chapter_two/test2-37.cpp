#include <iostream>
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
    ++c;
    ++d;
    std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
    system("pause");
    return 0;
}