#include <array>

int main()
{
    const int arraySize {10};

    std::array<int, arraySize> arr = {0};
    arr[0] = 100;
    arr[9] = 1000;

    return 0;
}