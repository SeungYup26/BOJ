#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int> dp { 1, 2 };
    for (int i = 2; i < n; i++)
    {
        dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
    }

    std::cout << dp[n - 1] << '\n';

    return 0;
}