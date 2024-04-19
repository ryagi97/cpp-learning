#include <iostream>
#include <string>
#include <vector>

int main()
{
    int value {0};
    int i {0};

    constexpr int centsInDollar     {100};
    constexpr int centsInQuarter    {25};
    constexpr int centsInDime       {10};
    constexpr int centsInNickel     {5};
    constexpr int centsInPenny      {1};

    const std::vector<std::string> centsNames {"Dollars", "Quarters", "Dimes", "Nickels", "Pennies"};
    const std::vector<int> centsValues {centsInDollar, centsInQuarter, centsInDime, centsInNickel, centsInPenny};
    std::vector<int> changeAmounts {0, 0, 0, 0, 0};

    std::cout << "Enter an amount in cents: ";
    std::cin >> value;

    for (i = 0; i < centsValues.size(); i++) {
        changeAmounts.at(i) = value / centsValues.at(i);   
        value = value % centsValues.at(i);
    }

    std::cout << "You can provide this change as follows:\n";
    for (i = 0; i < centsNames.size(); i++) {
        std::cout << centsNames.at(i) + ":\t" + std::to_string(changeAmounts.at(i)) + "\n";
    }
    std::cout << std::endl;


    return 0;
}