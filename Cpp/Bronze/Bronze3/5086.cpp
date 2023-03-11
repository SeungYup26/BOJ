#include <iostream>

int main()
{
    while (true)
    {
        int one{}, two{};
        std::cin >> one >> two;

        if (!one && !two)
        {
            break;
        }
        else if (two % one == 0)
        {
            std::cout << "factor\n";
        }
        else if (one % two == 0)
        {
            std::cout << "multiple\n";
        }
        else
        {
            std::cout << "neither\n";
        }
    }

    return 0;
}