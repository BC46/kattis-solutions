#include <iostream>

using namespace std;

int main()
{
    bool containsProblem;
    string line;

    while (getline(cin, line)) {
        for (auto &c : line)
            c = tolower(c);

        containsProblem = line.find("problem") != std::string::npos;

        cout << (containsProblem ? "yes" : "no") << '\n';
    }

    return 0;
}
