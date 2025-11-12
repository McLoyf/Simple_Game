// 1.2 — Comments

#include <iostream>


/* This is a multi-line comment
   This is fairly easy to grasp*/

/* This looks a little nicer
 * And it doesn't effect the comment
 * it can be easier to read 
 */

// Comment should be used at the top of a program to tell what it does

// Multi-line comments can be used to describe exactly how a program works
// useful in a team so you don't have to look line-by-line how a program works

/*Comments should be used to describe why the code is doing something. 
 *A bad statement comment explains WHAT the code is doing. 
 *If you ever write code that is so complex that needs a comment to explain what a statement
 *is doing, you probably need to rewrite your statement, not comment it.
 */

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
    // Set sight range to 0
    int sight = 0;          // Bad comment

    // The player just drank a potion of blindness and can not see anything
    sight = 0;              // Good commit, tells us why the player's sight to set to 0
    singleLine();
    return 0;
}

//Good comments
//________________________________________________________________________
// We decided to use a linked list instead of an array because
// arrays do insertion too slowly.
//________________________________________________________________________
// We're going to use Newton's method to find the root of a number because
// there is no deterministic way to solve these equations.
//________________________________________________________________________

//Best Practice
//Comment your code liberally, and write your comments as if speaking to someone
//who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

// Documentation generation programs like Doxygen can be useful

//For VSCode you can comment a selection with crtl-/