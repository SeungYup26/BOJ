#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    std::string N;
    std::cin >> N;
    std::sort(N.begin(), N.end(), std::greater<char>());

    if (std::find(N.begin(), N.end(), '0') == N.end()) {
        std::cout << -1 << '\n';
    }
    else {
        int NN = 0;
        for (const char& e : N) NN += e;

        if (NN % 3 == 0)
            std::cout << N << '\n';
        else std::cout << -1 << '\n';
    }

    return 0;
}