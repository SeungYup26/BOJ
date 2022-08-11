#include <iostream>
#include <array>

bool continueNumber(int n)
{
    std::array<int, 3> digit { n % 10, n / 10 % 10, n / 100 };
    if (digit[0] - digit[1] == digit[1] - digit[2])
        return true;
    return false;
}

int main()
{
    int n = 0;
    std::cin >> n;
    
    if (n >= 100) {
        int result = 99;
        for (int i = 100; i <= n; ++i)
        {
            if (continueNumber(i))
                ++result;
        }

        std::cout << result << '\n';   
    }
    else {
        std::cout << n << '\n';
    }

    return 0;
}