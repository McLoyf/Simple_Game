// Whitespace and basic formatting

#include <iostream> 
int main(){std::cout << "Hello, World \n"; std::string name; std::cout << "Enter your name: "; std::cin >> name; std::cout << "Hello " << name; return 0;}

/* Formatting
*  Basically just write code in a way that makes the code easy to read but their
*  isn't just one way to write code for readiabilty, just don't do what the above
*  code does.
*
*  It's really hard to read, right?
*
*  Below is the same code made easy to read:
*
*  #include <iostream>
*
*  int main()
*  {
*       std::string name;
*
*       std::cout << "Hello, World \n";
*       std::cout << "Enter your name ";
*
*       std::cin >> name;
*       std::cout << "Hello " << name;
*
*       return 0;
*  }
*/