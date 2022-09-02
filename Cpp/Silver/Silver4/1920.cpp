#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int num = 0;
        std::cin >> num;
        a.emplace_back(num);
    }

    int m = 0;
    std::cin >> m;

    std::vector<int> b;
    for (int i = 0; i < m; ++i)
    {
        int num = 0;
        std::cin >> num;
        b.emplace_back(num);
    }

    std::sort(a.begin(), a.end());
    for (const auto& num : b)
    {
        bool isFind = std::binary_search(a.begin(), a.end(), num);
        std::cout << isFind << '\n';
    }

    return 0;
}