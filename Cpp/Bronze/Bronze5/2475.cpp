#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << (a*a + b*b + c*c + d*d + e*e) % 10 << '\n';

    return 0;
}