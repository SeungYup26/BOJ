#include <iostream>
#include <string>

int main()
{
    std::string crypted;
    while (true)
    {
        std::getline(std::cin, crypted);
        if (crypted == "END")
        {
            break;
        }
        std::reverse(crypted.begin(), crypted.end());
        std::cout << crypted << '\n';
    }

    return 0;
}