#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> divisors;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    if (divisors.size() < k) {
        std::cout << 0 << '\n';
    }
    else {
        std::cout << divisors[k - 1] << '\n';
    }

    return 0;
}