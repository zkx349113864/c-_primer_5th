#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::istream;
using std::ostream;
using std::ifstream;
using std::istringstream;

class Sales_data {

public:
    friend istream &read(istream&, Sales_data&);
    friend ostream &print(ostream &os, const Sales_data &item);

    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(istream &is) {
        read(is, *this);
    }

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;


private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

};

Sales_data add(const Sales_data&, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data&);

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
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
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// int main(int argc, char *argv[])
int main()
{
    // ifstream in(argv[0]);
    ifstream in("solddata.txt");
    Sales_data total;
    if(read(in, total)) {
        Sales_data trans;
        while(read(in, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data!" << endl;
    }
    system("pause");
    return 0;
}
