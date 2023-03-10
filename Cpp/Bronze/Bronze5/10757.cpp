#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    std::string a{}, b{};
    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int carry{};
    std::string result{};
    for (int i{}; i < std::max(a.length(), b.length()); i++)
    {
        int l{ a.length() > i ? a[i] - '0' : 0 };
        int r{ b.length() > i ? b[i] - '0' : 0 };
        int v{ l + r + carry };
        carry = v / 10;
        result.push_back(v % 10 + '0');
    }
    if (carry)
    {
        result.push_back(carry + '0');
    }

    std::reverse(result.begin(), result.end());
    std::cout << result << '\n';

    return 0;
}