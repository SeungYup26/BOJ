#include <iostream>

int main()
{
    int T = 0;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A = 0, B = 0;
        std::cin >> A >> B;
        std::cout << A + B << std::endl;
    }

    return 0;
}