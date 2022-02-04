#include<iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    bool remainder[42] { false };
    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        std::cin >> num;
        remainder[num % 42] = true;
    }

    int result = 0;
    for (int i = 0; i < 42; i++)
    {
        result += remainder[i];
    }

    std::cout << result << '\n';

    return 0;
}