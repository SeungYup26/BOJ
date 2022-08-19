#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, p = 0;
    std::cin >> a >> b >> c >> d >> p;

    int x_bill = p * a; 
    int y_bill = p <= c ? b : b + (p - c) * d;
    std::cout << std::min(x_bill, y_bill) << '\n';

    return 0;
}