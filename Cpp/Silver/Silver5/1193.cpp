#include <iostream>

int main()
{
    int x{};
    std::cin >> x;

    int sum{}, diagonal{ 1 };
    while (x > sum + diagonal)
    {
        sum += diagonal++;
    }

    int pos_x{}, pos_y{};
    if (diagonal % 2 == 0)
    {
        pos_x = x - sum;
        pos_y = diagonal - pos_x + 1;
    }
    else
    {
        pos_y = x - sum;
        pos_x = diagonal - pos_y + 1;
    }

    std::cout << pos_x << '/' << pos_y << '\n';

    return 0;
}