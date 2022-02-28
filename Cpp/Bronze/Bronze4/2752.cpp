#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    std::array<int, 3> numbers;
    std::cin >> numbers[0] >> numbers[1] >> numbers[2];

    std::sort(numbers.begin(), numbers.end());
    std::cout << numbers[0] << ' ' << numbers[1] << ' ' << numbers[2] << '\n';

    return 0;
}