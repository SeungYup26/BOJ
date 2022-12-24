#include <iostream>
#include <algorithm>

int main()
{
    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a = 0, b = 0, c = 0;
        std::cin >> a >> b >> c;
        std::cout << std::min(a, std::min(b, c)) << '\n';
    }

    return 0;
}