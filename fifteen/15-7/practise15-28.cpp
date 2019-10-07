#include <iostream>
#include <vector>
#include <memory>
#include "Quote.h"

using namespace std;

int main()
{
    Bulk_quote item("a2", 7.7, 10, 0.2);
    vector<Quote> qv;
    qv.push_back(item);

    double sum1 = 0.0;
    for (auto &q : qv)
        sum1 += q.net_price(20);
    cout << sum1 << endl;

    vector<shared_ptr<Quote>> pitem;
    pitem.push_back(make_shared<Bulk_quote>(item));

    double sum2 = 0.0;
    for(auto &q : pitem)
        sum2 += q->net_price(20);
    cout << sum2 << endl;

    system("pause");
    return 0;
}