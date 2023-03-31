#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    string input, policies = "UD";

    cin >> input;
    char p = input[0];

    for (const auto &policy : policies) {
        if (p != input[1])
            ++total;
        if (input[1] != policy)
            ++total;

        for (int i = 2; i < input.length(); ++i) {
            if (input[i] != policy)
                total += 2;
        }

        cout << total << endl;
        total = 0;
    }

    for (int i = 1; i < input.length(); ++i) {
        if (input[i] != p)
            ++total;

        p = input[i];
    }

    cout << total << endl;
    return 0;
}
