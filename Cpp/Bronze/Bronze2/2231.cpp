#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num = i, sum = i;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n)
        {
            std::cout << i << '\n';
            return 0;
        }
    }

    std::cout << 0 << '\n';

    return 0;
}