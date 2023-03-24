#include <algorithm>
#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    int min_x{ 10000 }, max_x{ -10000 };
    int min_y{ 10000 }, max_y{ -10000 };
    for (int i{}; i < n; i++)
    {
        int x{}, y{};
        std::cin >> x >> y;

        min_x = std::min(x, min_x);
        max_x = std::max(x, max_x);
        min_y = std::min(y, min_y);
        max_y = std::max(y, max_y);
    }

    std::cout << (max_x - min_x) * (max_y - min_y) << '\n';

    return 0;
}