#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input, sub;

    int n, result;
    cin >> n;

    unordered_map<string, int> words;

    for (int i = 0;; ++i) {
        cin >> input;

        auto keyword = words.find(input);
        result = keyword == words.end() ? 0 : keyword->second;

        cout << result << '\n';

        if (i == n - 1)
            break;

        for (unsigned int j = input.size(); j > 0; --j) {
            sub = input.substr(0, j);

            auto it = words.find(sub);

            if (it == words.end())
                words.emplace(sub, 1);
            else
                it->second++;
        }
    }

    return 0;
}
