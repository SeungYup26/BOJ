#include <iostream>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;
    std::string abc_result { std::to_string(A * B * C) };

    int count[10]{};
    for (int i = 0; i < abc_result.size(); i++)
        count[abc_result[i] - '0']++;

    for (const auto& e : count)
        std::cout << e << '\n';

    return 0;
}