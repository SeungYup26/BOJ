#include <cstring>
#include <iostream>
#include <string>

int main()
{
    std::string s, p;
    std::cin >> s >> p;

    bool isFound = std::strstr(s.c_str(), p.c_str());;
    std::cout << isFound ? 1 : 0 << '\n';
    return 0;
}