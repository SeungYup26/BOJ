#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> costs;

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v = 0;
        std::cin >> v;
        costs.push_back(v);
    }

    std::sort(costs.begin(), costs.end());

    int result = 0;
    for (int i = 0; i < n - 1; i++)
    {
        result += costs[i];
    }

    std::cout << result << '\n';

    return 0;
}