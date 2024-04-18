#include <vector>
#include <iostream>

int main()
{
    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; //  automatically set to 0

    vowels.push_back('y');

    for (char n : vowels)
        std::cout << n << ' ';
    std::cout << std::endl;

    std::cout << vowels.size() << std::endl;

    int x = vowels.at(345);
    std::cout << x << std::endl;

    return 0;
}