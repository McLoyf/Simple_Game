// 1.3 — Introduction to objects and variables

/* Values placed in single-quotes are interpreted by the compiler as character values.
*  Values placed in double-quotes are interpreted by the compiler as text values.
*  Numeric values are not quoted.
*/

#include <iostream>

int main()
{
    int a, b;
    double x;
    std::cout << 5;         //print literal number '5'
    std::cout << -6.7;      //print literal number '-6.7'
    std::cout << 'H';       //print literal character 'H'
    std::cout << "Hello";   //print literal text 'Hello'

    return 0;
}