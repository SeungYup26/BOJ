#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    for (int i{ 1 }; i <= n; i++)
    {
        for (int j{ n - i }; j > 0; j--)
        {
            std::cout << ' ';
        }
        for (int j{ 2 * i - 1 }; j > 0; j--)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    for (int i{ 1 }; i < n; i++)
    {
        for (int j{}; j < i; j++)
        {
            std::cout << ' ';
        }
        for (int j{ 2 * (n - i) - 1 }; j > 0; j--)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}