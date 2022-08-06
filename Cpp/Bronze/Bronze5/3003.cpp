#include <iostream>
#include <array>

int main()
{
    std::array<int, 6> piece { 1, 1, 2, 2, 2, 8 };

    std::array<int, 6> input;
    for (auto& e : input)
    {
        std::cin >> e;
    }

    for (size_t i = 0; i < piece.size(); ++i)
    {
        std::cout << piece[i] - input[i] << ' ';
    }

    return 0;
}