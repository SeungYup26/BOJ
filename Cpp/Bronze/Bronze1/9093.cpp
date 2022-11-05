#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

int main()
{
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    for (int i = 0; i < t; i++)
    {
        std::string word;
        std::getline(std::cin, word);
        std::stringstream ss(word);

        while (std::getline(ss, word, ' '))
        {
            std::reverse(word.begin(), word.end());
            std::cout << word << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}