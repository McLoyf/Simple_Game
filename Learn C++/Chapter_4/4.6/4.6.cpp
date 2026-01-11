// Fixed-width integers and size_t

#include <iostream>
#include <cstdint>  // for fixed-width integer

int main()
{
    int x { 32767 };        // x may be 16-bit or 32-bit
    x = x + 1;              // 32768 overflows if int is 16-bit, runs fine if it's 32-bit
    std::cout << x << '\n'; // for my pc, this results in 32768 (runs just fine)

    std::int32_t y { 32767 };
    y = y + 1;
    std::cout << y << '\n'; // for me this makes no difference but this is guaranteed to run fine


    std::cout << "least 8:  " << sizeof(std::int_least8_t)  * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  "  << sizeof(std::int_fast8_t)   * 8 << " bits\n";
	std::cout << "fast 16: "  << sizeof(std::int_fast16_t)  * 8 << " bits\n";
	std::cout << "fast 32: "  << sizeof(std::int_fast32_t)  * 8 << " bits\n";

    return 0;
}

/*  List of fixed width integers
*   std::int8_t    1 byte signed     Range: -128 to 127
*   std::uint8_t   1 byte unsigned   Range: 0 to 255
*   std::int16_t   2 byte signed     Range: -32,768 to 32,767
*   std::uint16_t  2 byte unsigned   Range: 0 to 65,535
*   std::int32_t   4 byte signed     Range: -2,147,483,648 to 2,147,483,647
*   std::uint32_t  4 byte unsigned   Range: 0 to 4,294,967,295
*   std::int64_t   8 byte signed     Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
*   std::uint64_t  8 byte unsigned   Range: 0 to 18,446,744,073,709,551,615
*/