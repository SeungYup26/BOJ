#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    std::cin >> a >> b >> c >> d >> e;

    std::cout << ((a < 40 ? 40 : a)
                + (b < 40 ? 40 : b)
                + (c < 40 ? 40 : c)
                + (d < 40 ? 40 : d)
                + (e < 40 ? 40 : e)) / 5 << '\n';

    return 0;
}