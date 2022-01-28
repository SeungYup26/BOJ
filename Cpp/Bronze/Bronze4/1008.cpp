#include <iostream>

int main()
{
    double A = 0, B = 0;
    std::cin >> A >> B;

    std::cout.precision(9);
    std::cout << std::fixed;
    std::cout << A / B << std::endl;

    return 0;
}