// Introduction to iostream: cout, cin, and endl

#include <iostream>

int main()
{
    std::cout << "Hi!" << std::endl;                    // cout stands for character out and prints to the console
    std::cout << "My name is Alex" << std::endl;        // endl stands for end line and makes a new line

    std::cout << "Enter your SSN: ";

    int x{};
    std::cin >> x;

    std::cout << "You entered " << x << '\n';
    return 0;
}

/* More on std::cout
*  The output of std::cout is buffered which means that the requested output is stored in a
*  region of memory set aside to collect such requests (called a buffer). The buffer is flushed
*  periodically, meaning all the data collected in the buffer is transferred to the console.
*
*  Writing data to a buffer is typically fast as it minimizes the number of times output has
*  been sent to the output device
*/

/* Difference between std::endl and \n
*  std::endl actually has two jobs; The first is moving the cursor to the next line and it also
*  flushes the buffer which is slow and probably unnescessary. When we output text to the console
*  C++'s output system is designed to self-flush periodically so it's simpler and more efficient
*  to let it flush itself.
*
*  In comparison \n, is a special character that the compiler interprets as a newline character.
*  It simply moves the cursor to the next line and it can be used in single quotes or double
*  because otherwise it will be assumed that it's C++ code when it's actually a special character.
*  So the above main function would be better off with '/n' instead of std::endl
*/

/* My answer to Question 2
#include <iostream>

int main()
{
    std::cout << "Enter three numbers seperated with a space: ";
    
    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;
    std::cout << "You entered " << a << ", " << b << ", and " << c << "." << '/n';

    return 0;
}
*/