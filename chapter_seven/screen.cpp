#include <iostream>
#include <string>
#include "Screen.h"
using std::cin;
using std::cout; using std::endl;

int main()
{
    /* Screen myscreen;
    myscreen.move(4, 0).set('#');
    char ch = myscreen.get();
    cout << ch << endl;
    ch = myscreen.get(0, 0);
    cout << ch << endl; */


    Screen myscreen(5, 3);
    const Screen blank(5, 3);
    myscreen.set('#').display(cout);
    cout << endl;
    blank.display(cout);


    system("pause");
    return 0;
}