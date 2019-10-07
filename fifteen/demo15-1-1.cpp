#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Quote {
public:
    string isbn() const;
    virtual double net_price(size_t n) const;
};

class Bulk_quote : public Quote {

};