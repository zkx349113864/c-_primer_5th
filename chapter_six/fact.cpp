#include <iostream>
#include "Chapter6.h"

int fact (int val)
{
    int rel = 1;
    while (val > 1) {
        rel *= val--;
    }
    return rel;
}