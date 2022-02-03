#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int A = 0, B = 0;
    while (true)
    {
        std::cin >> A >> B;
        
        if (A + B == 0)
            break;

        std::cout << A + B << '\n';
    }

    return 0;
}