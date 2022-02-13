#include <iostream>

int d(int n)
{
    int result = n, temp = n;
    while (temp != 0)
    {
        result += temp % 10;
        temp /= 10;
    }

    return result;
}

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    bool arr[10000] { false };
    for (int i = 1; i < 10000; i++)
    {
        int g = d(i);
        if (g < 10000) {
            arr[g] = true;
        }
    }
    for (int i = 1; i < 10000; i++)
    {
        if (!arr[i]) std::cout << i << '\n';
    }
}