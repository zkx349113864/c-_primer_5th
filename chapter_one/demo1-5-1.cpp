#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    // 读入ISBN号、售出的册数以及销售价格
    std::cin >> book;
    std::cout << book << std::endl;
    system("pause");
    return 0;
}