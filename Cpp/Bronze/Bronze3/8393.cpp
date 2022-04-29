#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    int total = 0;

    for (int i = 1; i <= n; i++)
        total += i;

    std::cout << total << '\n';

    return 0;
}