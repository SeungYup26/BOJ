#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    int total{};
    for (int i = 0; i < n; i++)
    {
        int point{};
        std::cin >> point;
        point ? total++ : total--;
    }

    std::cout << (total > 0 ? "Junhee is cute!"
                            : "Junhee is not cute!") << '\n';

    return 0;
}