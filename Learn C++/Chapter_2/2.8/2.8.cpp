// Programs with multiple code files

#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
    return 0;
}

/* I go into a bash terminal and input "g++ 2.8.cpp add.cpp" and run the resulting a.exe. I chose to
   rename it and go into the terminal and input ./{filename}.exe and it runs fine.
   "#include add.cpp" also works but apparently it's not recommended as it increases the risk
   of naming conflicts and other anticipated consequences
*/