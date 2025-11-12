// 1.1 — Statements and the structure of a program

// Including iostream library in the C++ standard library
#include <iostream>

int main()
{
    // character output = cout
    std::cout << "Hello world!";
    return 0;// return 0 to tell that it run successfully as C++ doesn't do this automatically like other langauges
}

/*
___________________________________________
Syntax Error Tip:

Depending on the compiler, it will report a syntax error a line after we we can fix it
For example, given the code below

1 #include <iostream>
2
3 int main()
4 {
5     std::cout << "Hello world!"  // <-- No semicolon
6     return 0;
7 }

In Visual Studio it will say the error is occuring on line 6 but Clang says it's on line 5

So, if unable to find the error on the given line check the line before. 
(VSCode shows the error on line 5 and 6)
___________________________________________
*/