#include <iostream>

int main()
{
    int h = 0, m = 0;
    std::cin >> h >> m;

    if (m < 45) {
        if (h == 0) h = 23;
        else h--;

        m = (m + 60) - 45;
    }
    else m -= 45;

    std::cout << h << ' ' << m << std::endl;

    return 0;
}