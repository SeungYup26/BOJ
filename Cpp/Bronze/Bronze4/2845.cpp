#include <iostream>
#include <array>

int main()
{
    int l = 0, p = 0;
    std::cin >> l >> p;

    std::array<int, 5> num;
    for (int& n : num)
        std::cin >> n;

    int num_of_person = l * p;
    for (const int& n : num)
        std::cout << n - num_of_person << ' ';

    return 0;
}
