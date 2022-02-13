#include <iostream>
#include <vector>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int C = 0;
    std::cin >> C;

    for (int i = 0; i < C; i++)
    {
        int N = 0;
        std::cin >> N;

        int* scores = new int[N]{};

        int average = 0;
        for (int j = 0; j < N; j++)
        {
            std::cin >> scores[j];
            average += scores[j];
        }

        average /= N;

        float average_count = 0.0f;
        for (int i = 0; i < N; i++)
        {
            if (scores[i] > average) {
                average_count++;
            }
        }

        std::cout.precision(3);
        std::cout << std::fixed;
        std::cout << average_count / N * 100 << "%\n";

    }

    return 0;
}