#include <iostream>

int main()
{
    int n = 0, t = 0, c = 0, p = 0;
    std::cin >> n >> t >> c >> p;

    int profits = (n - 1) / t * c * p;
    std::cout << profits << '\n';

    return 0;
}