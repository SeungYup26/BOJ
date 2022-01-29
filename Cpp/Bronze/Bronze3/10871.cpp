#include <iostream>

int main()
{
    std::cin.tie(0);
    std::cout.sync_with_stdio(false);

    int N = 0, X = 0;
    std::cin >> N >> X;

    for(int i = 0; i < N; i++)
    {
        int A = 0;
        std::cin >> A;

        if (A < X) {
            std::cout << A << ' ';
        }
    }

    return 0;
}