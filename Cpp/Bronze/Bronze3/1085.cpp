#include <iostream>
#include <algorithm>

int main()
{
    int x = 0, y = 0, w = 0, h = 0;
    std::cin >> x >> y >> w >> h;
    std::cout << std::min(std::min(x, y), std::min(w - x, h - y));

    return 0;
}
