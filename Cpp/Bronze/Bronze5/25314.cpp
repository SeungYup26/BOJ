#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n / 4; ++i)
    {
        std::cout << "long ";
    }
    std::cout << "int\n";

    return 0;
}