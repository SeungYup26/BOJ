#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    int primes[1000000]{};

    for (int i = 2; i <= n; ++i)
        primes[i] = i;

    for (int i = 2; i * i <= n; ++i)
    {
        if (primes[i] == 0)
            continue;

        for (int j = i * i; j <= n; j += i)
            primes[j] = 0;
    }

    for (int i = m; i <= n; ++i)
    {
        if (primes[i] != 0)
            std::cout << primes[i] << '\n';
    }

    return 0;
}