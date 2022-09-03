#include <iostream>
#include <stack>

int main()
{
    int k = 0;
    std::cin >> k;

    std::stack<int> nums;
    for (int i = 0; i < k; ++i)
    {
        int num = 0;
        std::cin >> num;
        num ? nums.push(num) : nums.pop();
    }

    int sum = 0;
    while (!nums.empty())
    {
        sum += nums.top();
        nums.pop();
    }

    std::cout << sum << '\n';

    return 0;
}