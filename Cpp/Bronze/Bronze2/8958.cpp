
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int score_count = 0;
    std::cin >> score_count;

    std::vector<std::string> scores;
    for (int i = 0; i < score_count; i++)
    {
        std::string score;
        std::cin >> score;
        scores.push_back(score);
    }

    for (std::size_t i = 0; i < scores.size(); i++)
    {
        int result = 0, plus_count = 1;

        for (std::size_t j = 0; j < scores[i].size(); j++)
        {
            if (scores[i][j] == 'O')
                result += plus_count++;
            else plus_count = 1;
        }

        std::cout << result << '\n';
    }

    return 0;
}