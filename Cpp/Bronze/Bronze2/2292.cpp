#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    int pile = 1, hive = 1;
    while (hive < n)
    {
        hive += 6 * pile++;
    }

    std::cout << pile <<  '\n';

    return 0;
}