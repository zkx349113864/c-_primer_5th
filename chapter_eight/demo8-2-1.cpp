#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;

int main()
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while(read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    } else {
        cerr << "No data?!" << endl;
    }
}