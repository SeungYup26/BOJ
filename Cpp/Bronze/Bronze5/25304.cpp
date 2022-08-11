#include <iostream>
#include <array>

int main()
{
    int x = 0, n = 0;
    std::cin >> x >> n;

    std::array<int, 100> a{};
    std::array<int, 100> b{};

    int total_price = 0;
    for (int i = 0; i < 100; ++i)
    {
        std::cin >> a[i] >> b[i];
        total_price += a[i] * b[i];
    }
    
    std::cout << (total_price == x ? "Yes\n" : "No\n");

    return 0;
}
