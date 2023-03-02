#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n{}, m{};
    std::cin >> n >> m;

    std::vector<int> basket(n);
    for (int x{}; x < n; x++)
    {
        basket[x] = x + 1;
    }

    for (int x{}; x < m; x++)
    {
        int i{}, j{}, k{};
        std::cin >> i >> j >> k;

        std::rotate(basket.begin() + i - 1, basket.begin() + k - 1, basket.begin() + j);
    }

    for (const auto& ball : basket)
    {
        std::cout << ball << ' ';
    }

    std::cout << '\n';

    return 0;
}