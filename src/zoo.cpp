#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    string input, word;
    int n, listNr = 1;

    while (cin >> n && n > 0) {
        cin.ignore();
        map<string, int> list;

        while (n--) {
            getline(cin, input);

            istringstream iss(input);

            while (iss >> word);
            transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return tolower(c); });

            auto it = list.find(word);
            if (it == list.end())
                list.emplace(word, 1);
            else
                it->second++;
        }

        cout << "List " << listNr++ << ":\n";

        for (const auto &animal : list)
            cout << animal.first << " | " << animal.second << '\n';
    }

    return 0;
}
