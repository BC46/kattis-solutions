#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<string, int> votes{};
    string vote, result;
    int highest = 0;
    bool multipleHighest{};

    while (getline(cin, vote) && vote != "***") {
        auto it = votes.find(vote);

        if (it == votes.end())
            votes.insert({ vote, 1 });
        else
            it->second++;
    }

    for (const auto &it: votes) {
        if (it.second > highest) {
            highest = it.second;
            multipleHighest = false;

            result = it.first;
        } else if (it.second == highest)
            multipleHighest = true;
    }

    if (multipleHighest)
        result = "Runoff!";

    cout << result << endl;
    return 0;
}
