// Introduction to local scope

#include <iostream>

int getValueFromUser()
{
    int input;          // input is a local variable and cannot be used in main
    std::cout << "Enter an integer: ";
    std::cin >> input;
    return input;
}

int main()
{
    int num{ getValueFromUser() };
    
    std::cout << "You entered " << num << '\n';

    return 0;
}