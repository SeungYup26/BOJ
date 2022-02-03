#include <iostream>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;
    int temp = N % 10 + (N / 10) * 10;

    int cycle = 0;
    while (true)
    {
        temp = (temp % 10) * 10 + (temp % 10 + temp / 10) % 10;
        cycle++;

        if(temp == N)
            break;
    }

    std::cout << cycle << '\n';

    return 0;
}