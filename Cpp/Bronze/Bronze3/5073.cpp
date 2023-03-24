#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    while (true)
    {
        std::array<int, 3> sides{};
        std::cin >> sides[0] >> sides[1] >> sides[2];
        if (sides[0] == 0 && sides[1] == 0 && sides[2] == 0)
        {
            break;
        }

        std::sort(sides.begin(), sides.end());
        if (sides[0] + sides[1] <= sides[2])
        {
            std::cout << "Invalid\n";
        }
        else if (sides[0] == sides[1] && sides[1] == sides[2])
        {
            std::cout << "Equilateral\n";
        }
        else if (sides[0] == sides[1] || sides[0] == sides[2] || sides[1] == sides[2])
        {
            std::cout << "Isosceles\n";
        }
        else
        {
            std::cout << "Scalene\n";
        }
    }

    return 0;
}