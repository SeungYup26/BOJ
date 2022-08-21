#include <iostream>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    std::cin >> n1 >> n2 >> n3;
    std::cout << (n1 + 1) * (n2 + 1) / (n3 + 1) - 1 << '\n';

    return 0;
}