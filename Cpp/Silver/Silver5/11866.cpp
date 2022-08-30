#include <iostream>
#include <queue>

int main()
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::queue<int> people;
    for (int i = 1; i <= n; ++i)
    {
        people.push(i);
    }

    std::cout << '<';
    while (people.size() != 0)
    {

        for (int i = 1; i < k; ++i)
        {
            people.push(people.front());
            people.pop();
        }

        std::cout << people.front();
        people.pop();

        std::cout << (people.size() != 0 ? ", " : ">\n");
    }


    return 0;
}