#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;
    
    for (const auto& c : word)
    {
        std::cout << static_cast<char>(isupper(c) ? tolower(c) : toupper(c));
    }

    return 0;
}