#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            std::cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            std::cout << '*';

        std::cout << '\n';
    }

    return 0;
}