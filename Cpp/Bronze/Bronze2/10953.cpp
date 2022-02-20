#include <iostream>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int T = 0;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int  A = 0, B = 0;
        char temp_ch = '\0';
        std::cin >> A >> temp_ch >> B;
        std::cout << A + B << '\n';
    }

    return 0;
}