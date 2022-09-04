#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string num;
        std::cin >> num;
        if (num == "0") {
            break;
        }

        std::string reversed = num;
        std::reverse(reversed.begin(), reversed.end());
        std::cout << (num == reversed ? "yes\n" : "no\n");
    }

    return 0;
}