#include <iostream>
#include <string>

int main()
{
    std::string s{};
    std::cin >> s;

    int i{};
    std::cin >> i;

    std::cout << s[i-1] << '\n';

    return 0;
}