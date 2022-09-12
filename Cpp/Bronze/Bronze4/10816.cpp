#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int> numbers;
    for (int i = 0; i < n; ++i)
    {
        int number = 0;
        std::cin >> number;
        numbers.emplace_back(number);
    }
    std::sort(numbers.begin(), numbers.end());

    int m = 0;
    std::cin >> m;

    std::vector<int> targets;
    for (int i = 0; i < m; ++i)
    {
        int target = 0;
        std::cin >> target;
        targets.emplace_back(target);
    }

    for (const auto& target : targets)
    {
        auto begin = std::lower_bound(numbers.begin(), numbers.end(), target);
        auto end = std::upper_bound(numbers.begin(), numbers.end(), target);
        int target_count = end - begin;
        std::cout << target_count << ' ';
    }

    return 0;
}