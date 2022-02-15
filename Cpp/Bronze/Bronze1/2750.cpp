#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    std::vector<int> nums;
    for (int i = 0; i < N; i++)
    {
        int num = 0;
        std::cin >> num;
        nums.push_back(num);
    }

    std::sort(nums.begin(), nums.end());

    for (const int& e : nums)
    {
        std::cout << e << '\n';
    }

    return 0;
}