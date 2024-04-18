/*
 * Name: room-area.cpp
 * Description: Prompts user for room dimensions, and outputs area
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <iostream>

int main(void) 
{
    int roomWidth = 0;
    int roomLength = 0;

    std::cout << "Enter the width of the room: ";
    std::cin >> roomWidth;

    std::cout << "Enter the length of the room: ";
    std::cin >> roomLength;

    std::cout << "Area of the room is: " << roomLength*roomWidth << std::endl;

    return 0;
}