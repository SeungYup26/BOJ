#include <iostream>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        int h = 0, w = 0, n = 0;
        std::cin >> h >> w >> n;

        std::vector<int> rooms;
        for (int room = 1; room <= w; ++room)
        {
            for (int floor = 1; floor <= h; ++floor)
            {
                rooms.emplace_back(floor * 100 + room);
            }
        }

        std::cout << rooms[n - 1] << '\n';
    }

    return 0;
}