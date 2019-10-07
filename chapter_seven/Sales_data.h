// #include <iotream>

#ifndef SALESDATA_H
#define SALESDATA_H

#include <iostream>

// #include <string>
// struct Sales_data {
class Sales_data {
    // 声明友元
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend istream& operator>>(istream &is, Sales_data &s);
    friend ostream& operator<<(ostream &os, Sales_data &s);
    friend bool operator==(const Sales_data &lhs, const Sales_data &rhs);

    public:
    // 新增构造函数
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    // Sales_data(const std::string s = "") : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &is) 
    {
        read(is, *this);
    };
    // 之前已有的其他成员
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
    Sales_data operator+(const Sales_data &s);
    Sales_data& operator+=(const Sales_data &s);

    private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

istream& operator>>(istream &is, Sales_data &s);
ostream& operator<<(ostream &os, Sales_data s);

#endif