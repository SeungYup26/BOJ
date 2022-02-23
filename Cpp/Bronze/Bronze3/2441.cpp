#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < N - i; j++)
            std::cout << ' ';
        for (int j = 0; j < i; j++)
            std::cout << '*';
        std::cout << '\n';
    }

    return 0;
}