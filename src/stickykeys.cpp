#include <iostream>

using namespace std;

int main()
{
    char p;

    string input, result;
    getline(cin, input);

    result = p = input[0];

    for (int i = 1; i < input.length(); ++i) {
        if (input[i] != p)
            result += input[i];

        p = input[i];
    }

    cout << result << endl;
    return 0;
}
