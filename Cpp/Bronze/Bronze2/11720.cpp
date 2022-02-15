#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        char num = '\0';
        std::cin >> num;
        result += num - '0';
    }

    std::cout << result << '\n';

    return 0;
}