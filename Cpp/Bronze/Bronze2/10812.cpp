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
        int i{}, j{};
        std::cin >> i >> j;

        std::swap(basket[i - 1], basket[j - 1]);
    }

    for (const auto& ball : basket)
    {
        std::cout << ball << ' ';
    }

    std::cout << '\n';

    return 0;
}