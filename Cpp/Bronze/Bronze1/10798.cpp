#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words( 5 );

    for (int i{}; i < 5; i++)
    {
        std::cin >> words[i];
    }

    for (int i{}; i < 15; i++)
    {
        for (int j{}; j < 5; j++)
        {
            if (i < words[j].length())
            {
                std::cout << words[j][i];
            }
        }
    }

    std::cout << '\n';

    return 0;
}