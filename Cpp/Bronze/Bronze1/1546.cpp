
#include <iostream>
#include <algorithm>

int main()
{
    int N = 0, M = 0;
    std::cin >> N;

    float* scores = new float[N]{};
    for (int i = 0; i < N; i++)
    {
        std::cin >> scores[i];
        if(scores[i] > M) M = scores[i];
    }

    float average = scores[0] / M * 100;
    for (int i = 1; i < N; i++)
    {
        average += scores[i] / M * 100;
    }

    std::cout << average / N << '\n';

    delete[] scores;

    return 0;
}