// Signed integers
#include <iostream>

short s;        // prefer "short" instead of "short int"
int i;
long l;         // prefer "long" instead of "long int"
long long ll;   // prefer "long long" instead of "long long int"

signed short ss;    // "signed" keyword can be used but is redundant as it's signed unless defined otherwise

int main()
{
    int x{ 2'147'483'647 };
    std::cout << x << '\n';

    x = x + 1;  // Will result in an overflow which is considered undefined behavior and may vary
    std::cout << x << '\n';

    return 0;
}

/* Size/Type        Range
*  8-bit-signed     -128 to 127
*  16-bit signed    -32,768 to 32,767
*  32-bit-signed    -2,127,438,648 to 2,147,483,647
*  64-bit-signed    -9,223,372,036,854,775,808 to 9,223,372,036,854,775,804 
*                    (9 Quintillion, 223 Quadrillion, 372 Trillion, 36 Billion, 854 Million, 775 Thousand, 804)
*/