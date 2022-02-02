
#include <iostream>

int main()
{
    std::cout << "YHou are a secret agent breaking into a secure sever room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int PlayerGuess;
    std::cin >> PlayerGuess;
    std::cout << "You entered: " << PlayerGuess << std::endl;

    return 0;
}