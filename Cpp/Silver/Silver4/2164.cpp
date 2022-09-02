#include <iostream>
#include <queue>

int main()
{
    int n = 0;
    std::cin >> n;

    std::queue<int> cards;
    for (int i = 1; i <= n; ++i)
    {
        cards.push(i);
    }

    while(cards.size() != 1)
    {
        cards.pop();
        int front = cards.front();
        cards.pop();
        cards.push(front);
    }

    std::cout << cards.front() << '\n';

    return 0;
}