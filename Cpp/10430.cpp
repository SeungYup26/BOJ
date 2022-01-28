#include <iostream>

int main()
{
    int A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;

    std::cout << (A + B) % C << std::endl;
    std::cout << ((A % C) + (B % C)) % C << std::endl;
    std::cout << (A * B) % C << std::endl;
    std::cout << ((A % C) * (B % C)) % C << std::endl;

    return 0;
}