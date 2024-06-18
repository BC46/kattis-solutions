#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    cout << input[0];

    for (int i = 1; i < input.length(); ++i) {
        if (input[i - 1] != input[i])
            cout << input[i];
    }

    return 0;
}
