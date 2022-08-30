#include <iostream>
#include <utility>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<std::pair<int, int>> states;
    for (int i = 0; i < n; ++i)
    {
        int x = 0, y = 0;
        std::cin >> x >> y;
        states.emplace_back(x, y);
    }

    for (int i = 0; i < n; ++i)
    {
        int ranking = 1;

        for (int j = 0; j < n; ++j)
        {
            bool condition_x = states[i].first < states[j].first;
            bool condition_y = states[i].second < states[j].second;
            if (condition_x && condition_y) {
                ++ranking;
            }
        }

        std::cout << ranking << ' ';
    }

    return 0;
}