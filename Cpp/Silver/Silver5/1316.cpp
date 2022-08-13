#include <iostream>
#include <array>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    int result = 0;
    
    std::array<std::string, 100> word{};
    for (int i = 0; i < n; ++i)
    {
        std::cin >> word[i];
        std::array<bool, 26> is_used{};

        char privous = word[i][0];
        for (const auto& c : word[i])
        {
            if (is_used[c - 'a'] == true) {
                --result;
                break;
            }
            if (privous != c)
                is_used[privous - 'a'] = true;
                
            privous = c;
        }

        ++result;
    }

    std::cout << result << '\n';

    return 0;
}