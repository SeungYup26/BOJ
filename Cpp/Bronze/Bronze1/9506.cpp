#include <iostream>
#include <vector>

int main()
{
    while (true)
    {
        int n{};
        std::cin >> n;

        if (n == -1)
        {
            break;
        }
        else if (n == 1)
        {
            std::cout << "1 is NOT perfect.\n";
        }

        int total_divisor{};
        std::vector<int> divisors;
        for (int i{ 1 }; i < n; i++)
        {
            if (n % i == 0)
            {
                total_divisor += i;
                divisors.push_back(i);
            }
        }

        if (n == total_divisor)
        {
            std::cout << n << " = " << divisors[0];
            for (int i{ 1 }; i < divisors.size(); i++)
            {
                std::cout << " + " << divisors[i];
            }
        }
        else
        {
            std::cout << n << " is NOT perfect.";
        }

        std::cout << '\n';
    }

    return 0;
}