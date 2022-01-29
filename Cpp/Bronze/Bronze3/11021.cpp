#include <iostream>

int main()
{
    std::cin.tie(0);
    std::cout.sync_with_stdio(false);

    int T = 0;
    std::cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int A = 0, B = 0;
        std::cin >> A >> B;

        std::cout << "Case #" << i << ": " << A + B << '\n';
    }
    
    return 0;
}