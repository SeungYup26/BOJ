#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

bool compare(const std::pair<int, std::string>& r,
                const std::pair<int, std::string>& l)
{
    return r.first < l.first;
}


int main()
{
    int n = 0;
    std::cin >> n;
    
    std::vector<std::pair<int, std::string>> users;
    for (int i = 0; i < n; ++i)
    {
        int age = 0;
        std::cin >> age;

        std::string name;
        std::cin >> name;

        users.emplace_back(age, name);
    }

    std::stable_sort(users.begin(), users.end(), compare);
    for (const auto& user : users)
    {
        std::cout << user.first << ' ' << user.second << '\n';
    }

    return 0;
}