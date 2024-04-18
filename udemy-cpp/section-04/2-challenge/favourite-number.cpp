#include <iostream>

int main(void)
{
    constexpr int minNumber = 1;
    constexpr int naxNumber = 100;

    int favouriteNumber = 0;

    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favouriteNumber;

    if (favouriteNumber < minNumber || favouriteNumber > naxNumber) {
        std::cout << "Hey! Only numbers between 1 and 100 please." << std::endl;
        return 1;
    }

    std::cout << "Amazing! That's my favouite too!\n";
    std::cout << "No really, " << favouriteNumber << " is my favourite number too" << std::endl;

    return 0;
}