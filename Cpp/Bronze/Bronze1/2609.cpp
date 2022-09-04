#include <iostream>

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << gcd(a, b) << '\n';
    std::cout << lcm(a, b) << '\n';

    return 0;
}