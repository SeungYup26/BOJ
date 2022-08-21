#include <iostream>

int main()
{
    long long a = 0, b = 0;
    std::cin >> a >> b;

    long long result = ((a > b ? a - b : b - a) + 1) * (a + b) / 2;
    std::cout << result << '\n';

    return 0;
}