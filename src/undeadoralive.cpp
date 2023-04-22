#include <iostream>

using namespace std;

int main()
{
    bool sf{}, ff{};

    string input, result = "machine";
    getline(cin, input);

    for (int i = 0; i < input.length() - 1; ++i) {
        if (input[i] == ':') {
            if (input[i + 1] == ')')
                sf = true;
            else if (input[i + 1] == '(')
                ff = true;
        }
    }

    if (sf && ff)
        result = "double agent";
    else if (sf)
        result = "alive";
    else if (ff)
        result = "undead";

    cout << result << endl;
    return 0;
}
