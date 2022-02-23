#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    for (int i = N; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            std::cout << '*';
        std::cout << '\n';
    }

    return 0;
}