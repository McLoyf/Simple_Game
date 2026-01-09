// Void
# include <iostream>

void value; // won't work, variables can't be defined with incomplete type void

void doNothing()    // void means that it lacks a return value and in this case does nothing
{
    return;
}

int getValue(void){
    int x;
    std::cin >> x;

    return x;
}

int main()
{
    doNothing();
    std::cout << "doNothing() has been called." << '\n';
    return 0;
}

/* Deprecated: Functions that don't take parameters
*  The function getValue() (seen above) will compile in C++ to be backwards compatiible but
*  the use of keyword void is considered deprecated in C++, below is the preferred way to
*  say that a function has no parameters
*
*  int getValue()
*  {
*     (code goes here)
*  }
*/