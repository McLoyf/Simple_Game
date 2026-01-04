// Forward declarations and definitions

#include <iostream>

int add(int x, int y);      // Forward declaration of add()
int doMath(int first, int second, int third, int fourth);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n'; // Without forward declaration this will break here
    std::cout << "Here's some math " << doMath(4, 6, 8, 12) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int doMath(int first, int second, int third, int fourth)
{
    return first + second * third / fourth;
}