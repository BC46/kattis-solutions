#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void avgWord(const vector<string> &w, string &result) {
    for (int i = 0;; ++i) {
        int total = 0, currentWords = 0;

        for (const auto &word : w) {
            if (i < word.length()) {
                total += (int) word[i];
                ++currentWords;
            }
        }

        if (currentWords == 0)
            break;

        result += (char) floor((double) total / (double) currentWords);
    }
}

int main()
{
    int n;
    cin >> n;

    string result;
    vector<string> w(n);

    for (int i = 0; i < n; ++i)
        cin >> w[i];

    avgWord(w, result);

    cout << result << endl;
    return 0;
}
