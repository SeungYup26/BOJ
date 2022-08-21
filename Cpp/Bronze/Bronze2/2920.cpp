#include <iostream>
#include <array>

int main()
{
    std::array<int, 8> major;
    for (auto& m : major)
    {
        std::cin >> m;
    }

    int asc_count = 0, des_count = 0;
    for (int i = 0; i < 7; ++i)
    {
        int interval = major[i] - major[i + 1];
        if (interval == 1)
        {
            ++des_count;
        }
        else if (interval == -1)
        {
            ++asc_count;
        }
    }

    if (asc_count == 7)
    {
        std::cout << "ascending\n";
    }
    else if (des_count == 7)
    {
        std::cout << "descending\n";
    }
    else
    {
        std::cout << "mixed\n";
    }

    return 0;
}