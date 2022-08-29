#include <iostream>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    int count = 0, title = 666;
    while (true)
    {
        if (std::to_string(title).find("666") != std::string::npos) {
            if (++count == n) {
                break;
            }
        }

        ++title;
    }

    std::cout << title << '\n';

    return 0;
}