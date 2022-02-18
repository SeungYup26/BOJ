#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    std::string A, B;
    std::cin >> A >> B;

    std::replace(A.begin(), A.end(), '6', '5');
    std::replace(B.begin(), B.end(), '6', '5');
    std::cout << std::stoi(A) + std::stoi(B) << ' ';

    std::replace(A.begin(), A.end(), '5', '6');
    std::replace(B.begin(), B.end(), '5', '6');
    std::cout << std::stoi(A) + std::stoi(B) << '\n';

    return 0;
}