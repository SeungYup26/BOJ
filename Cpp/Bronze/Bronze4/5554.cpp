#include <iostream>

int main()
{
    int sec1 = 0, sec2 = 0, sec3 = 0, sec4 = 0;
    std::cin >> sec1 >> sec2 >> sec3 >> sec4;
    
    int total_sec = sec1 + sec2 + sec3 + sec4;
    std::cout << total_sec / 60 << '\n';
    std::cout << total_sec % 60 << '\n';


    return 0;
}