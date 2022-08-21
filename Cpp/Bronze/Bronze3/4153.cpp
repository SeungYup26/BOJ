#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    while (true)
    {
        std::array<int, 3> side;
        std::cin >> side[0] >> side[1] >> side[2];

        if (!side[0] && !side[1] && !side[2])
        {
            break;
        }

        std::sort(side.begin(), side.end(), std::greater<int>());
        bool is_true = side[0] * side[0] == side[1] * side[1] + side[2] * side[2];
        std::cout << (is_true ? "right\n" : "wrong\n");
    }

    return 0;
}