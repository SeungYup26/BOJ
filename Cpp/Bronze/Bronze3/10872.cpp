#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    int result = 1;
    for (int i = 2; i <= N; i++)
    {
        result *= i;
    }

    std::cout << result << '\n';

    return 0;
}