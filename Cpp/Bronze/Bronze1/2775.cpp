#include <iostream>
#include <array>

int main()
{
    std::array<std::array<int, 15>, 15> rooms{};
    for (int i = 0; i < 15; ++i)
    {
        rooms[0][i] = i;
    }

    for (int i = 1; i < 15; ++i)
    {
        for (int j = 1; j < 15; ++j)
        {
            for (int k = 1; k <= j; ++k)
            {
                rooms[i][j] += rooms[i - 1][k];
            }
        }
    }

    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int k = 0, n = 0;
        std::cin >> k >> n;
        std::cout << rooms[k][n] << '\n';
    }

    return 0;
}