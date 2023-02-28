#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n{}, m{};
    std::cin >> n >> m;

    std::vector<int> basket(n);
    for (int x{}; x < m; x++)
    {
        int i{}, j{}, k{};
        std::cin >> i >> j >> k;
        
        for (int y{ i - 1 }; y <= j - 1; y++)
        {
            basket[y] = k;
        }
    }

    for (const auto& ball : basket)
    {
        std::cout << ball << ' ';
    }

    std::cout << '\n';

    return 0;
}