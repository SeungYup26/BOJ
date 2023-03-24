#include <iostream>

int main()
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    bool is_triangle{ a + b + c == 180 };
    if (is_triangle)
    {
        if (a == b && b == c)
        {
            std::cout << "Equilateral\n";
        }
        else if (a == b || a == c || b == c)
        {
            std::cout << "Isosceles\n";
        }
        else
        {
            std::cout << "Scalene\n";
        }
    }
    else
    {
        std::cout << "Error\n";
    }


    return 0;
}