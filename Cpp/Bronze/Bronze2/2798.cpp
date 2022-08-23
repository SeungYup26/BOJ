#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<int> cards;
    for (int i = 0; i < n; ++i)
    {
        cards.push_back(0);
        std::cin >> cards[i];
    }

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum > result && sum <= m) {
                    result = sum;
                }
            }
        }
    }
    
    std::cout << result << '\n';

    return 0;
}