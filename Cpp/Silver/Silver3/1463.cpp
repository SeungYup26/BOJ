#include <iostream>
#include <array>

int main()
{
    int n = 0;
    std::cin >> n;

    std::array<int, 1000001> dp{};
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = std::min(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0) {
            dp[i] = std::min(dp[i], dp[i / 3] + 1);
        }
    }

    std::cout << dp[n] << '\n';

    return 0;
}