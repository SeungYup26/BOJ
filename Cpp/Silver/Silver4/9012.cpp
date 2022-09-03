#include <iostream>
#include <stack>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string vps;
        std::cin >> vps;

        std::stack<int> stack;
        for (const auto& c : vps)
        {
            if (c == '(') {
                stack.push(0);
            }
            else if (!stack.empty() && !stack.top()) {
                stack.pop();
            }
            else {
                stack.push(1);
            }
        }

        std::cout << (stack.empty() ? "YES" : "NO") << '\n';
    }

    return 0;
}