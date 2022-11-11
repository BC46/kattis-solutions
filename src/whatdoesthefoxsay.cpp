#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct Word {
    string w;
    bool isFox = true;
};

int main()
{
    int n;
    vector<Word> words(100);
    vector<string> results;
    string line, word;

    cin >> n;
    cin.ignore();
    while (n--) {
        int wc = 0;
        string result;

        getline(cin, line);
        istringstream initialWords(line);

        while (initialWords >> word) {
            words[wc++] = {word};
        }

        while (getline(cin, line) && line != "what does the fox say?") {
            istringstream newWords(line);

            for (int i = 0; i < 3; ++i)
                newWords >> word;

            for (int i = 0; i < wc; ++i) {
                if (words[i].w == word)
                    words[i].isFox = false;
            }
        }

        for (int i = 0; i < wc; ++i) {
            if (words[i].isFox)
                result += words[i].w + " ";
        }

        results.push_back(result);
    }

    for (const auto & r : results)
        cout << r << "\n";

    return 0;
}
