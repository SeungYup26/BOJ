#include <iostream>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        std::string computer;
        std::cin >> computer;
        
        for (auto& c : computer)
        {
            c = (c - 'A' + 1) % 26 + 'A';
        }

        std::cout << "String #" << i << '\n';
        std::cout << computer << "\n\n";
    }

    return 0;
}