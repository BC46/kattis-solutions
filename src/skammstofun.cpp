#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string input, abb;

    cin >> n;

    while (n--) {
        cin >> input;

        if (isupper(input[0]))
            abb += input[0];
    }

    cout << abb;

    return 0;
}
