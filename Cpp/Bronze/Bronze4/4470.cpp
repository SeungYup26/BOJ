#include <iostream>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    for (int i = 1; i <= n; ++i)
    {
        std::string text;
        std::getline(std::cin, text);
        std::cout << i << ". " << text << '\n';
    }

    return 0;
}