#include <iostream>
#include <array>

int main()
{
    std::array<int, 4> x{}, y{};
    for (int i{ 1 }; i <= 3; i++)
    {
        std::cin >> x[i] >> y[i];
    }

    int result_x{ x[1] };
    int result_y{ y[1] };

    if (result_x == x[2])
    {
        result_x = x[3];
    }
    else if (result_x == x[3])
    {
        result_x = x[2];
    }

    if (result_y == y[2])
    {
        result_y = y[3];
    }
    else if (result_y == y[3])
    {
        result_y = y[2];
    }
    
    std::cout << result_x << ' ' << result_y << '\n';

    return 0;
}