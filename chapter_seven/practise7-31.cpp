#include <iostream>
using namespace std;

class X {
    public:
    X() = default;
    void print(ostream &out) 
    {
        out << "I am X";
    }

    private:
    Y *yp;
};

class Y {
    public:
    Y() = default;
    void print(ostream &out)
    {
        out << "I am Y";
    }

    private:
    X xi;
};