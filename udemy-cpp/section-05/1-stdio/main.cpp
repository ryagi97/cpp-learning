#include <iostream>

int main(void)
{
    std::cout << "Hello World!" << std::endl;

    std::cout << "Hello";
    std::cout << "World!" << std::endl;

    /**************************************************************************/

    int num1, num2;
    double num3;

    std::cout << "Enter an integer: ";
    std::cin >> num1;
    std::cout << "You entered: " << num1 << std::endl;

    /**************************************************************************/

    std::cout << "Enter a first integer: ";
    std::cin >> num1;

    std::cout << "Enter a second integer: ";
    std::cin >> num2;

    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    /**************************************************************************/

    std::cout << "Enter two integeres seperated by a space: ";
    std::cin >> num1 >> num2;
    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    /**************************************************************************/

    std::cout << "Enter a double: ";
    std::cin >> num3;
    std::cout << "You entered: " << num3 << std::endl;


    return 0;
}
