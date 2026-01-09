// Object sizes and the sizeof operator

#include <iomanip>  // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits>  // for CHAR_BIT

int main()
{
    std::cout << "A byte is " << CHAR_BIT << "bits\n\n";

    std::cout << std::left;    // left justify output

    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;
}


/* Below object sizes of fundamental types
   - float :           Minimum size is 4 bytes | Typical size is 4 bytes
   - double :          Minimum size is 8 bytes | Typical size is 8 bytes
   - long double :     Minimum size is 8 bytes | Typical size is 8, 12, or 16 bytes
   - bool :            Minimum size is 1 byte  | Typical size is 1 byte
   - char :            Minimum size is 1 byte  | Typical size is 1 byte
   - wchar_t :         Minimum size is 1 byte  | Typical size is 2 or 4 bytes
   - char8_t :         Minimum size is 1 byte  | Typical size is 1 byte
   - char16_t :        Minimum size is 2 bytes | Typical size is 2 bytes
   - char32_t :        Minimum size is 4 bytes | Typical size is 4 bytes
   - short int :       Minimum size is 2 bytes | Typical size is 2 bytes
   - int :             Minimum size is 2 bytes | Typical size is 4 bytes
   - long int :        Minimum size is 4 bytes | Typical size is 4 or 8 bytes
   - long long int :   Minimum size is 8 bytes | Typical size is 8 bytes
   - std::nullptr_t :  Minimum size is 4 bytes | Typical size is 4 or 8 bytes
*/