#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<std::string_view, 8> croatian{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    std::string word;
    std::cin >> word;

    for (const auto& e : croatian)
    {
        while (true)
        {
            size_t target = word.find(e);
            if (target == std::string::npos)
                break;
            word.replace(target, e.length(), "@");
        }
    }

    std::cout << word.length() << '\n';

    return 0;
}