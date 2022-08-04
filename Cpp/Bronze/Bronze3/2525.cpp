#include <iostream>

int main()
{
    int hour = 0, minute = 0, duration = 0;
    std::cin >> hour >> minute >> duration;

    int total_minute = hour * 60 + minute + duration;

    hour = (total_minute / 60) % 24;
    minute = total_minute % 60;
    std::cout << hour << ' ' << minute << '\n';

    return 0;
}