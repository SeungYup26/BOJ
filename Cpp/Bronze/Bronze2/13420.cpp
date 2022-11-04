#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        char op = 0, eq = 0;
        long l = 0, r = 0, res = 0;
        std::cin >> l >> op >> r >> eq >> res;

        bool is_correct = false;
        if (op == '+') {
            is_correct = l + r == res;
        }
        else if (op == '-') {
            is_correct = l - r == res;
        }
        else if (op == '*') {
            is_correct = l * r == res;
        }
        else if (op == '/') {
            is_correct = l / r == res;
        }

        std::cout << (is_correct ? "correct\n" : "wrong answer\n");
    }


    return 0;
}