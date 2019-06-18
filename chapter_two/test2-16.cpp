#include <iostream>
int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.13159;
    r2 = r1;
    i = r2;
    r1 = d;
    system("pause");
    return 0;
}