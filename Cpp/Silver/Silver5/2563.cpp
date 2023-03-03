#include <iostream>
#include <array>

int main()
{
    int paper_count{};
    std::cin >> paper_count;

    std::array<std::array<int, 100>, 100> background{};
    for (int i{}; i < paper_count; i++)
    {
        int start_x{}, start_y{};
        std::cin >> start_x >> start_y;

        for (int x{ start_x }; x < start_x + 10; x++)
        {
            for (int y{ start_y }; y < start_y + 10; y++)
            {
                background[x][y] = 1;
            }
        }
    }

    int result{};
    for (const auto& row : background)
    {
        for (const auto& value : row)
        {
            result += value;
        }
    }

    std::cout << result << '\n';

    return 0;
}