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
        int R = 0;
        std::cin >> R;

        std::string S;
        std::cin >> S;

        for (const auto& e : S)
        {
            for (int j = 0; j < R; j++)
            {
                std::cout << e;
            }
        }

        std::cout << '\n';
    }

    return 0;
}