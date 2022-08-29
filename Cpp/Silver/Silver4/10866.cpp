#include <iostream>
#include <deque>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    std::deque<int> deque;
    for (int i = 0; i < n; ++i)
    {
        std::string command;
        std::cin >> command;

        if (command == "push_front") {
            int value = 0;
            std::cin >> value;
            deque.push_front(value);
        }
        else if (command == "push_back") {
            int value = 0;
            std::cin >> value;
            deque.push_back(value);
        }
        else if (command == "pop_front") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
                continue;
            }

            std::cout << deque.front() << '\n';
            deque.pop_front();
        }
        else if (command == "pop_back") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
                continue;
            }

            std::cout << deque.back() << '\n';
            deque.pop_back();
        }
        else if (command == "size") {
            std::cout << deque.size() << '\n';
        }
        else if (command == "empty") {
            std::cout << (deque.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front") {
            std::cout << (deque.empty() ? -1 : deque.front()) << '\n';
        }
        else if (command == "back") {
            std::cout << (deque.empty() ? -1 : deque.back()) << '\n';
        }
    }

    return 0;
}