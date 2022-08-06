#include <iostream>

int main()
{
    int result = 0;
    for (int i = 0; i < 5; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        result += temp;
    }

    std::cout << result << '\n';

    return 0;
}