#include <iostream>
#include <string>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        std::string str;
        std::getline(std::cin, str);
        std::cout << str << '\n';
    }

    return 0;
}