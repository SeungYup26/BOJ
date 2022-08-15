#include <iostream>
#include <array>

int main()
{
    std::string s;
    std::cin >> s;

    std::array<int, 26> alpha_count{};
    for (const auto& c : s)
    {
        ++alpha_count[(c & 31) - 1];
    }
    for (const auto& result : alpha_count)
    {
        std::cout << result << ' ';
    }

    return 0;
}