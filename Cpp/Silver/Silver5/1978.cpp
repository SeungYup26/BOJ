#include <iostream>

bool isPrime(int num)
{
    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = 0;
    std::cin >> n;

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = 0;
        std::cin >> num;

        if (num != 1 && isPrime(num)) {
            ++count;
        }
    }

    std::cout << count << '\n';

    return 0;
}