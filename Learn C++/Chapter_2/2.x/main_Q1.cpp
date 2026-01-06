// Chapter 2 summary and quiz

#include <iostream>

int readNumber();
void writeAnswer(int);

int main()
{
    int input1{ readNumber() };
    int input2{ readNumber() };

    writeAnswer(input1 + input2);

    return 0;
}

int readNumber()
{
    std::cout << "Enter a number to add: ";
    int num;
    std::cin >> num;

    return num;
}

void writeAnswer(int num)
{
    std::cout << "The answer is "<< num << '\n';
}
