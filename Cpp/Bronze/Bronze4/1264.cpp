#include <iostream>
#include <algorithm>
#include <array>
#include <string>

int main()
{
    std::array<char, 5> vowel { 'a', 'e', 'i' ,'o' ,'u' };

    while (true)
    {
        std::string str;
        std::getline(std::cin, str);
        if (str == "#") break;
        std::transform(str.begin(), str.end(), str.begin(), tolower);

        int vowel_count = 0;
        for (const auto& c : str)
        {
            for (const auto& v : vowel)
            {
                if (c == v) {
                    ++vowel_count;
                }
            }
        }

        std::cout << vowel_count << '\n';
    }

    return 0;
}