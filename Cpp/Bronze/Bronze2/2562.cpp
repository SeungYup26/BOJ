#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int id  = 0;
    int max = 0;
    int numbers[9]{};

    for (int i = 0; i < 9; i++)
    {
        std::cin >> numbers[i];

        if (numbers[i] > max) {
            id  = i + 1;
            max = numbers[i];
        }
    }

    std::cout << max << '\n' << id << '\n';

    return 0;
}