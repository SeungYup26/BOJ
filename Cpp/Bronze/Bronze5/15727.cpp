#include <iostream>

int main()
{
    int l = 0;
    std::cin >> l;
    
    int duration = !(l % 5) ? l / 5 : l / 5 + 1;
    std::cout << duration  << '\n';

    return 0;
}