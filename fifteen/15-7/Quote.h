#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

// using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Quote
{
public:
    Quote() = default;
    Quote(const string &book, double sales_price):
        bookNo(book), price(sales_price) { cout << "Quote construct" << endl; }
    Quote(const Quote &q): bookNo(q.bookNo), price(q.price) { cout << "Quote copy construct" << endl; }
    Quote(Quote &&q):
        bookNo(std::move(q.bookNo)), price(std::move(q.price)) { cout << "Quote move construct" << endl; }
    Quote& operator=(const Quote &q) {
        bookNo = q.bookNo;
        price = q.price;
        cout << "Quote operator = " << endl;
        return *this;
    }
    Quote& operator=(Quote &&q) {
        bookNo = std::move(q.bookNo);
        price = std::move(price);
        cout << "Quote operator move = " << endl;
        return *this;
    }
    string isbn() const { return bookNo; };
    virtual double net_price(size_t n) const { return n * price; }
    virtual void debug() { cout << "bookNo: " << " price: " << price << endl; }
    virtual ~Quote() { cout << "Quote destructor" << endl; }
private:
    string bookNo;
    // double price;
protected:
    double price = 0.0;
};

class Bulk_quote: public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string &book, double p, size_t qty, double disc):
        Quote(book, p), min_qty(qty), discount(disc) { cout << "Bulk_quote construct" << endl; }
    Bulk_quote(const Bulk_quote &b):
        Quote(b), min_qty(b.min_qty), discount(b.discount) { cout << "Bulk_quote copy construct" << endl; }
    Bulk_quote(Bulk_quote &&b):
        Quote(std::move(b)), min_qty(std::move(b.min_qty)), discount(std::move(b.discount)) {
            cout << "Bulk_quote copy construct" << endl;
        }
    Bulk_quote& operator=(const Bulk_quote &b) {
        Quote::operator=(b);
        min_qty = b.min_qty;
        discount = b.discount;
        cout << "Bulk_quote operator = construct" << endl;
        return *this;
    }
    Bulk_quote& operator=(Bulk_quote &&b) {
        Quote::operator=(std::move(b));
        min_qty = std::move(b.min_qty);
        discount = std::move(b.discount);
        cout << "Bulk_quote operator move = construct" << endl;
        return *this;
    }
    ~Bulk_quote() {
        cout << "Bulk_quote destructor" << endl;
    }
    void debug() override {
        Quote::debug();
        cout << "min_qty = " << min_qty << " discount= " <<discount << endl;
    }
    double net_price(size_t) const override;
private:
    size_t min_qty = 0;
    double discount = 0.0;
};

double print_total(ostream &os, const Quote &item, size_t n);

#endif