#include <iostream>

int main()
{
    int h = 0, m = 0, s = 0, d = 0;
    std::cin >> h >> m >> s >> d;

    const int hour = (h + (m + (s + d) / 60) / 60) % 24;
    std::cout << hour << ' ';

    const int minute = (m + (s + d) / 60) % 60;
    std::cout << minute << ' ';

    const int second = (s + d) % 60;
    std::cout << second << '\n';

    return 0;
}