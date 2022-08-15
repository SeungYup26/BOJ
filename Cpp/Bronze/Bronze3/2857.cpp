#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> FBI_id;
    for (int i = 1; i <= 5; ++i)
    {
        std::string name;
        std::cin >> name;
        if (name.find("FBI") != std::string::npos)
        {
            FBI_id.push_back(i);
        }
    }

    if (FBI_id.size() == 0)
    {
        std::cout << "HE GOT AWAY!\n";
    }
    else
    {
        for (const auto& id : FBI_id)
        {
            std::cout << id << ' ';
        }
    }

    return 0;
}