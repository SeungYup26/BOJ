#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int coin_types[] { 500, 100, 50, 10, 5, 1 };

    int pay = 0;
    std::cin >> pay;
    pay = 1000 - pay;

    int result = 0;
    for (const auto& coin : coin_types)
    {
        result += pay / coin;
        pay %= coin;
    }

    std::cout << result << '\n';

    return 0;
}