#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int val, value;
    unordered_map<string, int> mem;
    unordered_map<int, string> revMem;
    string line, command, var;

    while (getline(cin, line)) {
        istringstream iss(line);

        iss >> command;

        if (command == "clear") {
            mem.clear();
            revMem.clear();
        } else if (command == "def") {
            iss >> var >> val;

            auto it = mem.find(var);

            if (it == mem.end()) {
                mem.emplace(var, val);
            } else {
                revMem.erase(it->second);
                revMem.erase(val);
                it->second = val;
            }

            revMem.emplace(val, var);
        } else {
            bool unk = false;

            char op;
            string valueStr;
            iss >> valueStr;

            auto it = mem.find(valueStr);

            if (it == mem.end())
                unk = true;
            else
                value = it->second;

            cout << valueStr + ' ';

            while (true) {
                iss >> op;

                cout << op << ' ';

                if (op == '=')
                    break;

                iss >> valueStr;
                cout << valueStr << ' ';

                if (unk)
                    continue;

                it = mem.find(valueStr);

                if (it == mem.end()) {
                    unk = true;
                    continue;
                }

                if (op == '+')
                    value += it->second;
                else
                    value -= it->second;
            }

            if (unk) {
                cout << "unknown" << '\n';
                continue;
            }

            auto revIt = revMem.find(value);

            cout << (revIt == revMem.end() ? "unknown" : revIt->second) << '\n';
        }
    }

    return 0;
}
