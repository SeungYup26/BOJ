#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cin >> text;

    for (int i = 0; i < text.size(); i++)
    {
        std::cout << text[i];

        if ((i + 1) % 10 == 0)
            std::cout << '\n';
    }

    return 0;
}