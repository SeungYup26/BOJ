#include <map>
#include <iostream>
#include <string>

int main()
{
    double total_grades{};
    double total_gradesrating{};

    std::map<std::string, double> ratings{
        { "F", 0.0 }, { "D0", 1.0 }, { "D+", 1.5 }, 
        { "C0", 2.0 }, { "C+", 2.5 }, { "B0", 3.0 },
        { "B+", 3.5, }, { "A0", 4.0 }, { "A+", 4.5 }
    };

    for (int i{}; i < 20; i++)
    {
        std::string subject{};
        std::cin >> subject;

        double grades{};
        std::cin >> grades;

        std::string rating{};
        std::cin >> rating;

        if (rating == "P")
        {
            continue;
        }

        total_grades += grades;
        total_gradesrating += grades * ratings[rating];
    }

    std::cout << total_gradesrating / total_grades << '\n';

    return 0;
}