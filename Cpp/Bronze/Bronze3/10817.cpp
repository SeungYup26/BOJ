#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;

    if ((A >= B && A <= C) || (A <= B && A >= C))
        std::cout << A << '\n';
    else if ((B >= A && B <= C) || (B <= A && B >= C))
        std::cout << B << '\n';
    else std::cout << C << '\n';

    return 0;
}