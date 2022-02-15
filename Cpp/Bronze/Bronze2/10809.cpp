#include <iostream>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    std::string S;
    std::cin >> S;

    for (int i = 'a'; i <= 'z'; i++)
    {
        std::cout << static_cast<int>(S.find(i)) << ' ';
    }

    return 0;
}