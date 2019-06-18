#include <iostream>
int main()
{
    int a = 1234, b = 232;
    int *ap = &a;
    int *bp = &b;
    std::cout << ap << " " << *ap << std::endl;
    ap = bp;
    *ap = 233;
    std::cout << a << " " << b << std::endl;    
    system("pause");
    return 0;
}