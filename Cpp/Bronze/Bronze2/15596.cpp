#include <vector>

long long sum(std::vector<int>& a)
{
    long long result = 0;
    for (const auto& e : a)
    {
        result += e;
    }

    return result;
}