#include <iostream>
#include <set>

struct Compare
{
    bool operator()(std::string_view a, std::string_view b) const
    {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    }
};

int main()
{
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);

    int N = 0;
    std::cin >> N;

    std::set<std::string, Compare> words;

    for (int i = 0; i < N; i++)
    {
        std::string word;
        std::cin >> word;
        words.insert(word);
    }

    for (const auto& e : words)
    {
        std::cout << e << '\n';
    }

    return 0;
}