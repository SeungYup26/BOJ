#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    long count = 5;
    int increase = 7;
    for (int i = 1; i < n; ++i)
    {
        count += increase;
        increase += 3;
    }

    std::cout << count % 45678 << '\n';

    return 0;
}