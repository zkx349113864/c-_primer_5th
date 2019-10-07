#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Quote {
public:
    Quote() = default;
    Quote(const string &book, double sales_price): bookNo(book), price(sales_price) {}
    string isbn() const { return bookNo; }
    // string isbn() const;
    virtual double net_price(size_t n) const
    {
        return n * price;
    }
    virtual ~Quote() = default;   
private:
    string bookNo;
protected:
    double price = 0.0;
};

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const string& book, double p, size_t qty, double disc): Quote(book, p), min_qty(qty), discount(disc) {}
    double net_price(size_t) const override;
private:
    size_t min_qty = 0;         // 使用折扣政策的最低购买量
    double discount = 0.0;      // 以小数表示折扣额
};

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
    {
        return cnt * price;
    }
    
}

double print_total(ostream &os, const Quote &item, size_t n)
{
    // 根据传入item形参的对象类型调用Quote::net_price
    // 或者Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main()
{
    Quote q1("hello", 2.05);
    print_total(cout, q1, 20);
    system("pause");
    return 0;
}
