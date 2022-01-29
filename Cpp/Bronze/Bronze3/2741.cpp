#include <iostream>

int main()
{
    std::cin.tie(0);
    std::cout.sync_with_stdio(false);

    int N = 0;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        std::cout << i << '\n';
    }

    return 0;
}