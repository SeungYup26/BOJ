
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

bool str_compare(const std::string& a, const std::string& b)
{
    return a + b > b + a;
}

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    std::vector<std::string> list;
    for (int i = 0; i < N; i++)
    {
        std::string str;
        std::cin >> str;
        list.push_back(str);
    }

    std::sort(list.begin(), list.end(), str_compare);

    if (list[0] == "0") std::cout << 0 << '\n';
    else {
        for (const auto& e : list)
        {
            std::cout << e;
        }
    }

    return 0;
}