#include <iostream>
#include <string>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        std::string text;
        std::getline(std::cin, text, '\n');
        std::cout << text << '\n';
    }

    return 0;
}