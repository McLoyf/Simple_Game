// Introduction to function parameters and arguments

#include <iostream>

int doubleNumber(int x)
{
    return 2 * x;
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input;
    std::cin >> input;

    return input;
}

int main()
{
    std::cout << doubleNumber(getValueFromUser());

    return 0;
}

// My answer to question 4 and 5 answer above