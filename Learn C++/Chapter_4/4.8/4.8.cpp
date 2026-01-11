// Float point numbers

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';

    std::cout << std::setprecision(17);
    std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n';  // no suffix means double

    return 0;
}

/*  Precision of non-integer data types
*   float      : 6-9 digits of precision
*   double     : 15-18 digits of precision
*   long double: 15,18, or 33 digits of precision
*/