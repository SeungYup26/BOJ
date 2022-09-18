#include <iostream>

int main()
{
    while (true)
    {
        std::string name;
        int age = 0, kg = 0;
        std::cin >> name >> age >> kg;
        if (name == "#" && !age && !kg) {
            break;
        }

        bool check = age > 17 || kg >= 80;
        std::cout << name << (check ? " Senior\n" : " Junior\n");
    }

    return 0;
}