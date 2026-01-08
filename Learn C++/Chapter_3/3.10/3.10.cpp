// Finding issues before they become problems

/* Follow best practices
*  Don't program when tired or frustated (kind hard to do that tbh)
*  Undertsnad where the common pitfalls are in a language
*  Don't let you functions get too long
*  Prefer using the standard library to writing your own code, when possible
*  Comment your code liberally
*  Start with simple solutions, then layer in complexity incrementally
*  Avoid clever/non-obvious solutions
*  Optimize for readability and maintainability, not performance
*
*  Test your code as you write it to catch errors when they are being made as this makes the
*  error more obviousx
*/

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void testAdd()
{
    std::cout << "This function should print 2 0 0 -2\n";
    std::cout << add(1, 1) << '\n';
    std::cout << add(-1, 1) << '\n';
    std::cout << add(1, -1) << '\n';
    std::cout << add(-1, -1) << '\n';
}

int main()
{
    #define DEBUG   // comment out to stop testing
    #ifdef DEBUG
    testAdd();
    #endif

    return 0;
}