#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int> nums;
    for (int i = 0; i < n; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        nums.push_back(temp);
    }

    int target = 0;
    std::cin >> target;

    int count = 0;
    for (const int& num : nums)
    {
        if (target == num)
            ++count;
    }

    std::cout << count << '\n';

    return 0;
}