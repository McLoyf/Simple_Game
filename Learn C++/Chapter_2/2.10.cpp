// Introduction to then preprocessor

#include <iostream>

#define MY_NAME "Alex"  // Macro with substition text
#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE
    std::cout << "My name is: " << MY_NAME << '\n'; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
    #endif

    #ifndef PRINT_BOB
    std::cout << "Bob\n"; // will compile since PRINT_BOB is NOT defined
    #endif

    #if 0
    /* #if 0 is effectively a way to comment out code that would otherwise be hard to comment out
       and it can be undone by changing the 0 to a 1
    */
    std::cout << "I will not be printed";
    std::cout << "Me neither";
    #endif
    
    return 0;
}

/* #define can be used to create a macro. In C++, a macro is a rule that defines
*  how input text is converted into replacement output text. There are two
*  basic types of macros: object-like macros, and function-like macros.
*
*  Function-like Macros:
*  They act like functions, and serve a similar purpose. Their use is generally
*  considered unsafe, and almost anything they can do can be done by a normal function
*
*  Object-like macros can defined in one of two ways:
*  #define IDENTIFIER
*  #define IDENTIFIER subtitution_text
*/

/* Best Practice:
*  Avoid macros with substitution text unless no viable alternatives exist.
*/