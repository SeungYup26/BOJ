#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<int> score;
    for (int i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;
        score.push_back(x);
    }

    std::sort(score.begin(), score.end(), std::greater<int>());
    std::cout << score[k - 1] << '\n';

    return 0;
}