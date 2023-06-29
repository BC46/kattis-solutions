#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> mem;

    char c;
    int val;
    string line, op, name1, name2, result;

    while (getline(cin, line)) {
        istringstream iss(line);

        iss >> op;

        if (op == "define") {
            iss >> val >> name1;

            auto it = mem.find(name1);

            if (it == mem.end())
                mem.emplace(name1, val);
            else
                it->second = val;

            continue;
        }

        iss >> name1 >> c >> name2;

        auto it1 = mem.find(name1), it2 = mem.find(name2);

        if (it1 == mem.end() || it2 == mem.end())
            result = "undefined";
        else if (c == '<')
            result = it1->second < it2->second ? "true" : "false";
        else if (c == '>')
            result = it1->second > it2->second ? "true" : "false";
        else if (c == '=')
            result = it1->second == it2->second ? "true" : "false";

        cout << result << '\n';
    }

    return 0;
}
