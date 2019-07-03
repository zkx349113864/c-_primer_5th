#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

class Account {
public:
    void calculate() {
        amount += amount * interestRate;
    }
    static double rate() {
        return interestRate;
    }
    static void rate(double);
private:
    string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

void Account::rate(double newRate)
{
    interestRate = newRate;
}

double Account::initRate()
{
    return 0.02;
}

double Account::interestRate = initRate();

int main()
{
    return 0;
}
