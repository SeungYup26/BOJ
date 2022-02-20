#include <iostream>
#include <string>

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    std::string sentence;
    std::getline(std::cin >> std::ws, sentence);

    int  word_count = 0;
    bool word_flag  = false;

    for (std::size_t i = 0; i <= sentence.size(); i++)
    {
        if ((sentence[i] == ' ' || sentence[i] == '\0') && word_flag == true) {
            word_flag = false;
            word_count++;
        }
        else word_flag = true;
    }

    std::cout << word_count << '\n';

    return 0;
}