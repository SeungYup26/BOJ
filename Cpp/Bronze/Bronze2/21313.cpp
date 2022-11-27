#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    bool is_odd = false;
    if (n % 2 == 1) {
        is_odd = true;
        n--;
    }

    for (int i = n; i > 0; i--)
    {
        if (i % 2 == 0) {
            std::cout << "1 ";
        }
        else {
            std::cout << "2 ";
        }
    }

    if (is_odd) {
        std::cout << "3\n";
    }

    return 0;
}