#include <iostream>

int main()
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    int max = 0;
    for (int i = 1; i <= k; i++)
    {
        int num = n * i, reversed = 0;
        while (num)
        {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        max = max < reversed ? reversed : max;
    }

    std::cout << max << '\n';

    return 0;
}