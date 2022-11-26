#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> cards;

    int n = 0, m = 0;
    std::cin >> n >> m;

    int count = m - 1;
    for (int i = 0; i < m; i++)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;

        if (a < n) {
            cards.push_back(n - a);
        }
        else {
            count--;
        }
    }

    if (count == m - 1) {
        std::cout << 0 << '\n';
    }
    else {
        std::sort(cards.begin(), cards.end());

        int result = 0;
        for (int i = 0; i < count; i++)
        {
            result += cards[i];
        }

        std::cout << result << '\n';
    }

    return 0;
}