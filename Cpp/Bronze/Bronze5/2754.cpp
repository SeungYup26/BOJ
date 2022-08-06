#include <iostream>
#include <string>

int main()
{
    std::string score;
    std::cin >> score;

    float result = 0.0f;
    switch (score[0])
    {
    case 'A':
        result += 4;
        break;
    case 'B':
        result += 3;
        break;
    case 'C':
        result += 2;
        break;
    case 'D':
        result += 1;
        break;
    }
    switch (score[1])
    {
    case '+':
        result += 0.3;
        break;
    case '-':
        result -= 0.3;
        break;
    }

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << result << '\n';

    return 0;
}