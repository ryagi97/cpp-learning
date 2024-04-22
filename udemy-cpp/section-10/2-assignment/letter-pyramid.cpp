#include <iostream>
#include <string>
#include <algorithm>

int main()
{

    std::string inputString;
    std::string inputStringReversed;

    int maxPyramidHeight {0};

    std::cout << "Enter a string to build your letter pyramid: \n\t";
    std::getline(std::cin, inputString);
    std::cout << "\n\n";

    inputStringReversed = inputString;
    std::reverse(inputStringReversed.begin(), inputStringReversed.end());

    maxPyramidHeight = inputString.length();

    for (int i = 0; i < maxPyramidHeight; i++) {
        // prepend with spaces
        std::cout << std::string(maxPyramidHeight - i - 1, ' ');
        
        // print up till idx i
        std::cout << inputString.substr(0, i+1);
        // and print the reversed string
        std::cout << inputStringReversed.substr(inputStringReversed.length() - i, inputStringReversed.length() - 1);

        // and a newline
        std::cout << "\n";
    }

    return 0;
}