#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string password;
        std::cin >> password;

        int pw_length = password.length();
        bool is_possible = pw_length >= 6 && pw_length <= 9;
        std::cout << (is_possible ? "yes\n" : "no\n");
    }

    return 0;
}