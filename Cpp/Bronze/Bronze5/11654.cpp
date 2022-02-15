#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    char c = '\0';
    std::cin >> c;
    std::cout << static_cast<int>(c) << '\n';

    return 0;
}