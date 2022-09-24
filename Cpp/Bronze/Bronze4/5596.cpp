#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    int score1 = 0;
    for (int i = 0; i < 4; ++i)
    {
        int score = 0;
        std::cin >> score;
        score1 += score;
    }

    int score2 = 0;
    for (int i = 0; i < 4; ++i)
    {
        int score = 0;
        std::cin >> score;
        score2 += score;
    }

    std::cout << std::max(score1, score2) << '\n';

    return 0;
}