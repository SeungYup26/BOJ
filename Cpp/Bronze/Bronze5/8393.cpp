#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}