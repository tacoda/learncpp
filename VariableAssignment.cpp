#include <iostream>

int main()
{
    int width;
    width = 5; // copy assignment of value 5 into variable width

    // variable width now has value 5

    width = 7; // change value stored in variable width to 7

    // variable width now has value 7

    int a;     // no initializer (default initialization)
    int b = 5; // initializer after equals sign (copy initialization)
    int c(6);  // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11)
    int d{7};    // initializer in braces (direct list initialization)
    int e = {8}; // initializer in braces after equals sign (copy list initialization)
    int f{};     // initializer is empty braces (value initialization)

    return 0;
}