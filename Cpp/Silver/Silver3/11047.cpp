
#include <iostream>
#include <set>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0, K = 0;
    std::cin >> N >> K;

    std::set<int, std::greater<int>> coin_types;
    for (int i = 0; i < N; i++)
    {
        int coin = 0;
        std::cin >> coin;
        coin_types.insert(coin);
    }

    int coin_count = 0;
    for (const auto& coin : coin_types)
    {
        coin_count += K / coin;
        K %= coin;
    }

    std::cout << coin_count << '\n';

    return 0;
}