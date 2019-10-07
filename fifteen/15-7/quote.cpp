#include "Quote.h"

double
Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * price * (1 - discount);
    else
        return cnt * price;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}