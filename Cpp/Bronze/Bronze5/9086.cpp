#include <iostream>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string str;
        std::cin >> str;
        std::cout << str[0] << str[str.size() - 1] << '\n';
    }

    return 0;
}