#include <iostream>

int main()
{
    int min = 100;
    int result = 0;

    for (int i = 0; i < 7; i++)
    {
        int number = 0;
        std::cin >> number;

        if (number % 2 != 0) {
            if (min > number)
                min = number;
            result += number;
        }
    }

    if (result != 0) {
        std::cout << result << '\n';
        std::cout << min << '\n';
    }
    else std::cout << -1 << '\n';

    return 0;
}