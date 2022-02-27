#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    std::sort(n.begin(), n.end(), std::greater<char>());

    std::cout << n << '\n';

    return 0;
}