#include <iostream>
#include <algorithm>

int main()
{
    int d1 = 0, d2 = 0, d3 = 0;
    std::cin >> d1 >> d2 >> d3;

    if (d1 == d2 && d1 == d3) {
        std::cout << 10000 + d1 * 1000 << '\n';
    }
    else if (d1 == d2 || d1 == d3) {
        std::cout << 1000 + d1 * 100 << '\n';
    }
    else if (d2 == d3) {
        std::cout << 1000 + d2 * 100 << '\n';
    }
    else {
        std::cout << std::max(std::max(d1, d2), d3) * 100 << '\n';
    }

    return 0;
}