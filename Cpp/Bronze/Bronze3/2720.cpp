#include <iostream>
#include <array>

int main()
{
    std::array<int, 4> coins { 25, 10, 5, 1 };

    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int c = 0;
        std::cin >> c;

        for (const auto& coin : coins)
        {
            std::cout << c / coin << ' ';
            c %= coin;
        }

        std::cout << '\n';
    }

    return 0;
}