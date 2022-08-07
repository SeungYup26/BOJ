#include <iostream>
#include <array>

int main()
{
    std::array<int, 31> student{};
    for (int i = 0; i < 28; ++i)
    {
        int num = 0;
        std::cin >> num;
        student[num] = true;
    }

    for (int i = 1; i < student.size(); ++i)
    {
        if (student[i] == false)
            std::cout << i << '\n';
    }

    return 0;
}