#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string word{};
    std::cin >> word;

    std::string temp{ word };
    std::reverse(word.begin(), word.end());

    std::cout << (temp == word) << '\n';

    return 0;
}