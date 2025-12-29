// 1.4 Variable assignment and initialization

#include <iostream>

int main()
{
    int length;             // define an integer variable by the name of length
    length = 10;            // assignment of value 10 into variable width
    
    int width { 5 };        // definition and intialization can be done in one line
    std::cout << width;

    return 0;
}

/* Different forms of initialization in C++
*
*  int a;           Default-Initialization
*_________________________________________________
* Traditional Initialization Forms
*  int b = 5;       Copy-Initialization
*  int c ( 6 );     Direct-Initialization
*_________________________________________________
* Modern Initializaition Forms (Preferred)
*  int d { 7 };     Direct-List-Initialization
*  int e {};        Value-Initialization
*/


/* More about Default-Initialization
*  If left as is and never given a value the value isn't predictable and sometimes is called a 'garbage value'
*  Interestingly the program may just work as intended with no real issues but this really isn't a good thing.
*
*  GTA: San Andreas had a bug with unintiialized values that broke the Skimmer airplane, causing it not to
*  ever spawn naturally or even with a trainer tool in Windows 11 24H2. It took 20 years for this problem to
*  show it's face.
*
*  You can read more in-depth about this at Silent's Blog below
*  (https://cookieplmonster.github.io/2025/04/23/gta-san-andreas-win11-24h2-bug/)
*/

/* More about Copy-Initialization
*  Copy-Initilalization is used whenever values are impliclitly copied, such as when passing arguments to a 
*  function by value, returning from a function by value, ot catching exceptions by value. Less used now and
*  inherited from the C langauge.
*/

/* More about Direct-Initialization
*  Initially introduced to allow for more efficient intialization of complex object but has fallen out of favor
*  because of direct-list-intialization but has certain use cases
*/

/* More about List-Initialization
*  Works in almost all cases and behaves consistently as well as disallows narrowing conversions
* 
*  Example of narrowing conversions:
*  Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
*  Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.
*
*  int w1 { 4.5 }    // This would be a compile error
*
*  int w2 = 4.5;     // compiles: narrows the value down to integers, in this case the value is 4
*  int w3 (4.5);     // compiles: again, the value is 4
*/

/* About Unused variables
*  [[maybe_unused]] attribute can be used but should only be applied selectively to variables that have a specific 
*  and legitimate reason for being unused (e.g. because you need a list of named values, but which specific values
*  are actually used in a given program may vary). Otherwise, unused variables should be removed from the program.
*/