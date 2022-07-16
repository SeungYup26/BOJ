#include <iostream>

int main()
{
    int a = 1, b = 1;
    while (true)
    {
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        std::cout << (a > b ? "Yes" : "No") << '\n';
    }

    return 0;
}