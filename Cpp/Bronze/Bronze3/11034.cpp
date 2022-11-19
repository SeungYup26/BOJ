#include <iostream>
#include <algorithm>

int main()
{
    int a = 0, b = 0, c = 0;
    while (std::cin >> a >> b >> c)
    {
        std::cout << std::max(b - a, c - b) - 1 << '\n';
    }

    return 0;
}