#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {2, 4, 6, 8, 10};
decltype(odd) &arrRef(int i)
{
    return (i % 2) ? &odd : &even;
}

int main()
{

}