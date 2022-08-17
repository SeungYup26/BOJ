#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> mirror;

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string line;
        std::cin >> line;
        mirror.push_back(line);
    }

    int k = 0;
    std::cin >> k;
    
    switch (k)
    {
    case 2:
        for (auto& m : mirror)
        {
            std::reverse(m.begin(), m.end());
        }
        break;

    case 3:
        std::reverse(mirror.begin(), mirror.end());
    }

    for (const auto& m : mirror)
    {
        std::cout << m << '\n';
    }

    return 0;
}