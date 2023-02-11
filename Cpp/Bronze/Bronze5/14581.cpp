#include <iostream>
#include <string>

int main()
{
    std::string_view fan{ ":fan:" };

    std::string id;
    std::cin >> id;

    id.insert(0, ":");
    id.insert(id.length(), ":");

    std::cout << fan << fan << fan << '\n';
    std::cout << fan << id << fan << '\n';
    std::cout << fan << fan << fan << '\n';

    return 0;
}