// Uninitialized variables and undefined behavior

#include <iostream>

int main()
{
    int x;              // define x but leave it uninitialized

    std::cout << x;     // print the value of x (who knows what you'll get)

    return 0;
}