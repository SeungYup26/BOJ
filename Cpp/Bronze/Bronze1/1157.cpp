#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int alpha_count[26]{};

    std::string word;
    std::cin >> word;
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);

    for (const auto& alpha : word)
    {
        alpha_count[alpha - 'A']++;
    }

    int  max       = 0;
    char max_alpha = 0;
    int  is_same   = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < alpha_count[i]) {
            max = alpha_count[i];
            max_alpha = i + 'A';
        }
    }
    for (const auto& e : alpha_count)
    {
        if (max == e) is_same++;
    }

    if (is_same > 1)
        std::cout << "?\n";
    else std::cout << max_alpha << '\n';

    return 0;
}