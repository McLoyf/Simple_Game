#include "io.cpp"   // I know I shouldn't do this but this works to test it, I really need to learn
                    // how to properly include files when compiling

int readNumber();
void writeAnswer(int);

int main()
{
    int input1{ readNumber() };
    int input2{ readNumber() };

    writeAnswer(input1 + input2);

    return 0;
}