////// Variant 1 /////
#include "2.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> c = { 10, -10, -1 };

    if (sum(c) == c[0]) {
        c = invert(c);
        print(c);
    }
    else if (sum(c) > c[0]) {
        c = increase(c);
        print(c);
    }
    else {
        c = decrease(c);
        print(c);
    }
    
}
