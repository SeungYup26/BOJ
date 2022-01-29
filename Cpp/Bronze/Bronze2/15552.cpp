#include <iostream>

int main()
{
    std::cin.tie(0);
    std::cout.sync_with_stdio(false);

    int T = 0;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A = 0, B = 0;
        std::cin >> A >> B;
        std::cout << A + B << '\n';
    }

    return 0;
}