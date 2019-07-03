#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;


class NoDefault {
    // NoDefault() = default;
    public:
    NoDefault(int i) : number(i) {}

    private:
    int number;
};

class C {

    public:
    C() = default;

    private:
    NoDefault nd;
};


int main()
{

}