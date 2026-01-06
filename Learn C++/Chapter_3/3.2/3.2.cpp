// The debugging process

/* A general process to debugging
*  1. Find the root cause of the problem
*  2. Ensure you understand why the issue is occurring
*  3. Determine how you'll fix the issue.
*  4. Repair the issue causing the problem
*  5. Repair the issue causing the problem
*  6. Retest to ensure the problem has been fixed
*/

#include <iostream>

int add(int x, int y) // this function is supposed to perform addition
{
    return x + y; // used to be '-', now it's '+'
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n'; // was producing 2, now it's 8

    return 0;
}