#include <iostream>
#include <array>

int main()
{
    int n = 0, m = 0;
    std::cin >> n >> m;

    std::array<std::array<int, 100>, 100> a;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> a[i][j];
        }
    }

    std::array<std::array<int, 100>, 100> b;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << a[i][j] + b[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}