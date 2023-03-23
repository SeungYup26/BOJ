#include <algorithm>
#include <iostream>

int main()
{
    int x{}, y{}, w{}, h{};
    std::cin >> x >> y >> w >> h;

    int min{ std::min(w - x, std::min(h - y, std::min(x, y))) };
    std::cout << min << '\n';

    return 0;
}