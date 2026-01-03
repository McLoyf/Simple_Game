// Function return values (value-returning functions)

#include <iostream>

int num;

int getValueFromUser()    // Function will return an int value
{
    std::cout << "Enter an integer: ";
    int input;
    std::cin >> input;

    return input;     // Return the value the user entered
}

int main()
{
    int x{ getValueFromUser() };     // Initialize num with the return value of getValueFromUser()
    int y{ getValueFromUser() };
    
    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}