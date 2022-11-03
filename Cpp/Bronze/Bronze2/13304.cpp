#include <iostream>
#include <array>

int main()
{
    std::array<std::array<int, 3>, 2> students{};

    int n = 0, k = 0;
    std::cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int s = 0, y = 0;
        std::cin >> s >> y;
        if (y <= 2) {
            students[0][0]++;
        }
        else if (y <= 4) {
            students[s][1]++;
        }
        else if (y <= 6) {
            students[s][2]++;
        }
    }

    int room_count = 0;
    for (const auto& gender : students)
    {
        for (const auto& grade : gender)
        {
            room_count += !(grade % k) ? grade / k : grade / k + 1;
        }
    }

    std::cout << room_count << '\n';

    return 0;
}