#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << a * (b % 10) << std::endl;
    std::cout << a * ((b % 100 / 10)) << std::endl;
    std::cout << a * ((b / 100 % 10)) << std::endl;
    std::cout << a * b << std::endl;

    return 0;
}