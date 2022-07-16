#include <iostream>

int main()
{
    std::string question, ask;
    std::cin >> question >> ask;

    if (ask.size() > question.size()) {
        std::cout << "no\n";
    }
    else {
        std::cout << "go\n";
    }

    return 0;
}