// More debugging tactics

#include <iostream>

#define ENABLE_DEBUG    // comment out to disable debug

int getUserInput()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() called\n";
    #endif
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    
    return x;
}

int main()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "main() called\n";
    #endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}

/* Above is an example using a conditional but logging using something like plog can be used
*/