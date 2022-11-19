#include <iostream>
#include <array>

int main()
{
    std::array<int, 3> times { 300, 60, 10 };

    int t = 0;
    std::cin >> t;

    std::array<int, 3> results{};
    for (int i = 0; i < 3; i++)
    {
        results[i] = t / times[i];
        t %= times[i];
    }

    if (!t) {
        for (const auto& result : results)
        {
            std::cout << result << ' ';
        }
    }
    else {
        std::cout << -1 << '\n';
    }
    
    return 0;
}