/*
 * Name: cleaning-service.cpp
 * Description: Generates a quote for a cleaning service
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <iostream>

const double costSmallRoom {25};
const double costLargeRoom {35};

// returns appllicable tax on value
double calculateTax(double value)
{
    const double taxRate {0.06};
    return taxRate * value;
}

// returns net cost of cleaning
double calculateNetCost(int numSmallRooms, int numLargeRooms)
{
    return (numSmallRooms*costSmallRoom + numLargeRooms*costLargeRoom);
}

// returns net cost of cleaning + tax
double calculateTotalCost(int numSmallRooms, int numLargeRooms)
{
    double netCost = calculateNetCost(numSmallRooms, numLargeRooms);
    return netCost + calculateTax(netCost);
}

int main() 
{
    int numSmallRooms {0};
    int numLargeRooms {0};

    const int serviceValidDays {30};

    std::cout << "Welcome to Ryan's carpet cleaning service\n";

    std::cout << "How many small rooms do you need to clean? ";
    std::cin >> numSmallRooms;

    std::cout << "How many large rooms do you need to clean? ";
    std::cin >> numLargeRooms;

    double netCost = calculateNetCost(numSmallRooms, numLargeRooms);
    double applicableTax = calculateTax(netCost);
    double totalCost = calculateTotalCost(numSmallRooms, numLargeRooms);

    std::cout << "============================================================\n";
    std::cout << "Estimate for cleaning service: \n";
    std::cout << "Number of small rooms: " << numSmallRooms << "\n";
    std::cout << "Number of large rooms: " << numLargeRooms << "\n";
    std::cout << "Price per small room: €" << costSmallRoom << "\n";
    std::cout << "Price per large room: €" << costLargeRoom << "\n";
    std::cout << "Net cost: €" << netCost << "\n";
    std::cout << "Applicable Tax: €" << applicableTax << "\n";
    std::cout << "============================================================\n";
    std::cout << "Total estimate: €" << totalCost << "\n";
    std::cout << "This estimate is valid for " << serviceValidDays << " days" << std::endl;

    return 0;
}