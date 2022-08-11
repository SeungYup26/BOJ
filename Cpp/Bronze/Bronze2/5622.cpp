#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<int, 26> time {
         3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10
    };

    std::string word;
    std::cin >> word;

    int duration = 0;
    for (const auto& c : word)
    {
        duration += time[c - 'A'];
    }

    std::cout << duration << '\n';

    return 0;
}