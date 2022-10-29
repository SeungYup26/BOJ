#include <iostream>
#include <array>

int main()
{
    std::array<std::array<int, 9>, 9> board;

    int max = 0;
    int idx1 = 1, idx2 = 1;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            std::cin >> board[i][j];
            if (board[i][j] > max) {
                max = board[i][j];
                idx1 = i + 1;
                idx2 = j + 1;
            }
        }
    }

    std::cout << max << '\n';
    std::cout << idx1 << ' ' << idx2 << '\n';

    return 0;
}