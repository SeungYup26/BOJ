#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    
    int N = 0;
    std::cin >> N;

    int  max     = -1000000;
    int  min     = 1000000;
    int* numbers = new int[N]{};

    for (int i = 0; i < N; i++)
    {
        std::cin >> numbers[i];

        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }

    std::cout << min << ' ' << max << '\n';

    delete[] numbers;
    return 0;
}