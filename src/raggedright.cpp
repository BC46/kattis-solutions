#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned int n = 0, score = 0, calc;

    string line;
    vector<string> lines;

    while (getline(cin, line)) {
        if (line.size() > n)
            n = line.size();

        lines.emplace_back(line);
    }

    for (int i = 0; i < lines.size() - 1; ++i) {
        calc = n - lines[i].size();
        score += calc * calc;
    }

    cout << score << '\n';
    return 0;
}
