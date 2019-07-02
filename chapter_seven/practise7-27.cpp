#include <iostream>
#include "Screen.h"
using std::cin;
using std::cout; using std::endl;

int main()
{
    Screen myScreen(5, 5, 'x');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    system("pause");
    return 0;
}