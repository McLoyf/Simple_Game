// Void functions (non-value returning functions)

#include <iostream>

void printHi()
{
    std::cout << "Hi\n";
    // return 5;            // Compile error: trying to return a value in a void function
}

int main()
{
    printHi();              // Works perfectly fine

    // Compile error as the console is trying to print the return value of printHi() which obviously doesn't exist
    // std::cout << printHi();

    return 0;
}