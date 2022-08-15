#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<std::string> bread{};
    for (int i = 0; i < n; ++i)
    {
        std::string b;
        std::cin >> b;
        bread.push_back(b);
    }
    for (int i = 0; i < n; ++i)
    {
        std::reverse(bread[i].begin(), bread[i].end());
        std::cout << bread[i] << '\n';
    }

    return 0;
}