// 1.2 — Comments

#include <iostream>

void singleLine()
{
    std::cout << "Hello world!\n"; // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you\n"; // these comments can make code hard to read
    std::cout << "Yeah!\n"; // especially when lines are different lengths

    std::cout << "Hello world!\n";                  // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you\n";   // this is much easier to read
    std::cout << "Yeah!\n";                         // don't you think so?

     // std::cout lives in the iostream library
    std::cout << "Hello world!\n";

    // this is much easier to read
    std::cout << "It is very nice to meet you\n";

    // but I prefer the comments to line up neatly
    std::cout << "Yeah!\n";
}




int main()
{
    singleLine();
    return 0;
}