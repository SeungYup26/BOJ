#include <algorithm>
#include <iostream>
#include <vector>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n{}, m{};
    std::cin >> n >> m;

    int total_primes{};
    std::vector<int> primes;
    for (int i{ n }; i <= m; i++)
    {
        if (isPrime(i))
        {
            total_primes += i;
            primes.push_back(i);
        }
    }

    if (primes.empty())
    {
        std::cout << -1 << '\n';
    }
    else
    {
        std::sort(primes.begin(), primes.end());

        std::cout << total_primes << '\n';
        std::cout << primes[0] << '\n';
    }

    return 0;
}