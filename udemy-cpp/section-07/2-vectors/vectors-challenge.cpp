#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector1;
    std::vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "Vector 1 elements are: ";
    std::cout << vector1.at(0) << ' ' << vector1.at(1) << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "Vector 2 elements are: ";
    std::cout << vector2.at(0) << ' ' << vector2.at(1) << std::endl;

    // 2d vector
    std::vector<std::vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "Vector 2D elements are: \n";
    std::cout << vector_2d.at(0).at(0) << ' ' << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << ' ' << vector_2d.at(1).at(1) << std::endl;

    vector1.at(0) = 1000;

    std::cout << "Vector 2D elements are: \n";
    std::cout << vector_2d.at(0).at(0) << ' ' << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << ' ' << vector_2d.at(1).at(1) << std::endl;

    std::cout << "Vector 1 elements are: ";
    std::cout << vector1.at(0) << ' ' << vector1.at(1) << std::endl;

    return 0;
}