#include <iostream>
#include <set>
#include <utility>

int main()
{
    int n = 0;
    std::cin >> n;

    std::set<std::pair<int, int>> positions;
    for (int i = 0; i < n; ++i)
    {
        int x = 0, y = 0;
        std::cin >> x >> y;
        positions.insert({ x, y });
    }

    for (const auto& pos : positions)
    {
        std::cout << pos.first << ' ' << pos.second << '\n';
    }

    return 0;
}