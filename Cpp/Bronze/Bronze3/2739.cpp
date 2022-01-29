#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    for(int j = 1; j <= 9; j++)
    {
        std::cout << N << " * " << j << " = " << N * j << std::endl;
    }

    return 0;
}