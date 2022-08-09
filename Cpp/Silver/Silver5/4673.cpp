#include <iostream>
#include <array>

int d(int n)
{
    int self_number = n;
    while (n != 0)
    {
        self_number += n % 10;
        n /= 10;
    }

    return self_number;
}

int main()
{
    std::array<bool, 10001> is_self{};
    for (int i = 1; i <= 10000; ++i)
    {
        int true_index = d(i);
        if (true_index <= 10000)
            is_self[true_index] = true;
    }
    for (int i = 1; i <= 10000; ++i)
    {
        if (!is_self[i])
            std::cout << i << '\n';
    }

    return 0;
}