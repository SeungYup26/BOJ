#include <iostream>

int main()
{
    std::string crypted;
    std::cin >> crypted;

    for (const auto& c : crypted)
    {
        std::cout << static_cast<char>(c <= 'C'? c + 23 : c - 3);
    }

    return 0;
}