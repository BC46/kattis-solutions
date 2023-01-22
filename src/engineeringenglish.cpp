#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

void str_to_lower(const string &str, string &dest) {
    for (const auto &c : str)
        dest += static_cast<char>(tolower(c));
}

int main()
{
    std::unordered_map<string, void*> dict{};
    string input, w;

    while (getline(cin, input) && !input.empty()) {
        string result;
        istringstream iss(input);

        while (iss >> w) {
            string wLower;
            str_to_lower(w, wLower);

            if (dict.find(wLower) == dict.end()) {
                dict.insert({ wLower, nullptr });
                result += w + " ";
            } else
                result += ". ";
        }

        cout << result << endl;
    }

    return 0;
}
