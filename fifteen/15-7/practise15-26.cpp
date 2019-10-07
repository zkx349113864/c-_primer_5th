#include <iostream>
#include "Quote.h"
using namespace std;
int main()
{
    Quote q1("a1", 8.9);
    Bulk_quote q2("a2", 7.7, 10, 0.2);

    Quote q3(q1);
    Bulk_quote q4(q2);

    q3 = q1;
    q4 = q2;

    q3 = std::move(q1);
    q4 = std::move(q2);

    print_total(cout, q1, 10);
    print_total(cout, q2, 20);
    print_total(cout, q3, 10);
    print_total(cout, q4, 20);

    system("pause");
    return 0;

}