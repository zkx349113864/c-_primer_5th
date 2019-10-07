// #include <iostream>
#include <string>
#include "Sales_data.h"
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;

inline double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
    {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

/* Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
} */

istream& operator>>(istream &is, Sales_data &s)
{
    double price;
    is >> s.bookNo >> s.units_sold >> price;
    if (is)
        s.revenue = s.units_sold * price;
    else 
        s = Sales_data();
    return is;
}

ostream& operator<<(ostream &os, Sales_data &s)
{
    os << s.isbn() << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
    return os;
}

Sales_data& Sales_data::operator+=(const Sales_data &s)
{
    if (bookNo == s.bookNo)
    {
        units_sold = units_sold + s.units_sold;
        return *this;
    } else {
        cout << "can not add" << endl;
        return *this;
    }
}

Sales_data Sales_data::operator+(const Sales_data &s)
{
    if (bookNo == s.bookNo)
    {
        Sales_data ss;
        ss.bookNo = bookNo;
        ss.revenue = revenue;
        ss.units_sold = units_sold + s.units_sold;
        return ss;
    }
    else
    {
        cout << "error" << endl;
        return *this;
    }
}

bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue;
}

bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs);
}