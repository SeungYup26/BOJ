#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci(n) << '\n';

    return 0;
}