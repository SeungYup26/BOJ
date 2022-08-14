#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    if (c - b <= 0)
    {
        std::cout << -1 << '\n';
    }
    else
    {
        int bep = a / (c - b) + 1;
        std::cout << a / (c - b) + 1 << '\n';
    }

    return 0;
}