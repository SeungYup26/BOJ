#include <iostream>

int main()
{
    int a{}, b{}, v{};
    std::cin >> a >> b >> v;

    int duration{ (v - b) / (a - b) };
    if ((v - b) % (a - b) == 0)
    {
        std::cout << duration << '\n';
    }
    else
    {
        std::cout << duration + 1 << '\n';
    }

    return 0;
}