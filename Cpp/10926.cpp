#include <iostream>
#include <string>

int main()
{
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << name << "??!" << std::endl;

    return 0;
}