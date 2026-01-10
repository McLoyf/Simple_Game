// Unsigned integers, and why to avoid them

#include <iostream>

unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;

int main()
{
    signed int s { -1 };
    unsigned int u { 1 };

    if (s < u)  //  -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes
    
    return 0;
}

/* Size/Type           Range
*  8 bit unsigned      0 to 255
*  16 bit unsigned     0 to 65,535
*  32 bit unsigned     0 to 4,294,967,295
*  64 bit unsigned     0 to 18,446,744,073,709,551,615
*/