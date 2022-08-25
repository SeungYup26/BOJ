#include <iostream>
#include <stack>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    std::stack<int> stack;
    for (int i = 0; i < n; ++i)
    {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int value = 0;
            std::cin >> value;
            stack.push(value);
        }
        else if (command == "pop") {
            if (stack.empty()) {
                std::cout << -1 << '\n';
                continue;
            }

            std::cout << stack.top() << '\n';
            stack.pop();
        }
        else if (command == "size") {
            std::cout << stack.size() << "\n";
        }
        else if (command == "empty") {
            std::cout << (stack.empty() ? 1 : 0) << '\n';
        }
        else if (command == "top") {
            std::cout << (!stack.empty() ? stack.top() : -1) << '\n';
        }
    }

    return 0;
}