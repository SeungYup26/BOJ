#include <iostream>
#include <algorithm>

int main()
{
    int l = 0, a = 0, b = 0, c = 0, d = 0;
    std::cin >> l >> a >> b >> c >> d;

    int korean_day = !(a % c) ? a / c : a / c + 1;
    int math_day = !(b % d) ? b / d : b / d + 1;
    int free_days = l - std::max(korean_day, math_day);
    std::cout << free_days << '\n';

    return 0;
}