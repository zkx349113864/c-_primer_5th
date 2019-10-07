#include <iostream>
using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

class Date {
friend ostream &operator<<(ostream&, const Date&);
friend istream &operator>>(istream&, Date&);
public:
    Date() = default;
    Date(int y, int m, int d): year(y), month(m), day(d) {}
private:
    int year, month, day;
};

ostream &operator<<(ostream &os, const Date &dt)
{
    os << "year:" << dt.year << " month:" << dt.month << " day:" << dt.day;
    return os;
}

istream &operator>>(istream &is, Date &dt)
{
    is >> dt.year >> dt.month >> dt.day;
    if (!is)
        dt = Date();
    return is;
}

int main()
{
    Date d1;
    cin >> d1;
    cout << d1;
    system("pause");
    return 0;
}