// Why functions are useful, and how to use them effectively

/* Why use functions?
*
*  Organization -- In complex programs, having all the code in the main() funciton
*  becomes increasingly complicated. Spliting up the code into mangageable chucks
*  reduces complexlity of our program.
*
*  Reusability -- Once a function is written and known to be working it can be called
*  multiple times within the program. Functions can also be shared with other programs,
*  reducing the amount of code that has to be written from scratch (and retested) each time.
*
*  Testing -- Because functions reduce code redundancy, there's less code to test and once it's
*  tested there is no need to retest it unless we change the function. This makes it easier to 
*  find bugs.
*
*  Extensibility -- When we need to extend our program to handle a case it didn't before, functions
*  allow us make the change in one place and have that change take effect effect every time the
*  function is called.
*
*  Abstraction -- To use a function, you only need to know its name, inputs, outputs, and where it lives
*  You don't need to know how it works, or what other code it's dependent upon to use it. This lowers the
*  amount of knowledge required to use other people's code. Standard libarary is an example of this,
*  I don't know how std::cout works but I know what it does and how to use it.
*
*  A general rule of thumb for functions
*  A function should do one specific task and nothing else, example a function that adds two numbers named
*  add() or even a function that simply prints inputs to the console.
*/