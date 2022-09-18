#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<int, 3> burgers{};
    for (auto& burger : burgers)
    {
        std::cin >> burger;
    }

    std::array<int, 2> drinks;
    for (auto& drink : drinks)
    {
        std::cin >> drink;
    }

    int min_price = 9999;
    for (const auto& burger : burgers)
    {
        for (const auto& drink : drinks)
        {
            min_price = std::min(min_price, burger + drink - 50);
        }
    }

    std::cout << min_price << '\n';
    
    return 0;
}