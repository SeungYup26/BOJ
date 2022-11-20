#include <iostream>

int main()
{
    int count = 0;

    int n = 0;
    std::cin >> n;

    int prev_milk = 2;
    for (int i = 0; i < n; i++)
    {
        int milk = 0;
        std::cin >> milk;

        if (prev_milk == 2 && milk == 0) {
            count++;
            prev_milk = milk;
        }
        else if (prev_milk == 0 && milk == 1) {
            count++;
            prev_milk = milk;
        }
        else if (prev_milk == 1 && milk == 2) {
            count++;
            prev_milk = milk;
        }
    }

    std::cout << count << '\n';

    return 0;
}