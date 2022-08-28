#include <iostream>
#include <queue>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    std::queue<int> queue;
    for (int i = 0; i < n; ++i)
    {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int value = 0;
            std::cin >> value;
            queue.push(value);
        }
        else if (command == "pop") {
            if (queue.empty()) {
                std::cout << -1 << '\n';
                continue;
            }

            std::cout << queue.front() << '\n';
            queue.pop();
        }
        else if (command == "size") {
            std::cout << queue.size() << '\n';
        }
        else if (command == "empty") {
            std::cout << (queue.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front") {
            std::cout << (queue.empty() ? -1 : queue.front()) << '\n';
        }
        else if (command == "back") {
            std::cout << (queue.empty() ? -1 : queue.back()) << '\n';
        }
    }

    return 0;
}