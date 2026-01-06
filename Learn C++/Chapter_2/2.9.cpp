// Naming collisions and an introduction to namespaces

#include <iostream>

// All of the following statements are part of the global namespace

void foo();
int x;
int y{ 5 };
//x = 5;    Compile error: executable statements are not allowed in namespaces

int main()
{
    std::cout << "Hello world!"; // when we say cout, we mean the cout defined in the std namespace
}