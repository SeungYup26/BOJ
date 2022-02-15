#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    int nums[10001]{};
    for (int i = 0; i < N; i++)
    {
        int num = 0;
        std::cin >> num;
        nums[num]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}