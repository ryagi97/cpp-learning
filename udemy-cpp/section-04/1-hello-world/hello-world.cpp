#include <iostream>

extern int x;

int main(void)
{
    int userNumber = 0;

    std::cout << "Hello World!" << std::endl;
    std::cout << "Enter a number between 1 and 100: " << std::endl;
    std::cin >> userNumber;
    std::cout << "What a coincidence, that's my favourite too!" << std::endl; 

    std::cout << x;

    return 0;
}