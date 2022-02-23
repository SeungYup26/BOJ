#include <iostream>
#include <string>

int main()
{
    std::string A, B;
    std::cin >> A >> B;

    std::reverse(A.begin(), A.end());
    std::reverse(B.begin(), B.end());

    std::cout << (A > B ? A : B) << '\n';

    return 0;
}