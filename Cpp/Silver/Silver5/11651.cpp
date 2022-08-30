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
        positions.insert({ y, x });
    }

    for (const auto& pos : positions)
    {
        int x = pos.second;
        int y = pos.first;
        std::cout << x << ' ' << y << '\n';
    }

    return 0;
}