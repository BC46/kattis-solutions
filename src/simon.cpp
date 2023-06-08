#include <iostream>

using namespace std;

int main()
{
    string input;

    int t;
    cin >> t;

    cin.ignore();

    while (t--) {
        getline(cin, input);

        if (input.find("simon says") == 0 && input.size() > 10)
            cout << input.substr(11);

        cout << '\n';
    }

    return 0;
}
