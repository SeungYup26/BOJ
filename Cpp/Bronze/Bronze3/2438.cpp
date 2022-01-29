#include <iostream>

int main()
{
    std::cin.tie(0);
    std::cout.sync_with_stdio(false);

    int N = 0;
    std::cin >> N;

    for (int i = N; i >= 1; i--)
    {
        for (int j = N; j >= i; j--)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}