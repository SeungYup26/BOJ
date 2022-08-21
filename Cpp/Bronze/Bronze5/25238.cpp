#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    if (a * (100 - b) / 100 >= 100)
    {
        std::cout << 0 << '\n';
    }
    else
    {
        std::cout << 1 << '\n';
    }

    return 0;
}