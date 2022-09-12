#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        int h = 0, w = 0, n = 0;
        std::cin >> h >> w >> n;

        int room = n % h == 0 ? h * 100 + n / h
                              : n % h * 100 + n / h + 1;
        std::cout << room << '\n';
    }

    return 0;
}