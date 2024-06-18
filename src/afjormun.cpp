#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    int n;
    cin >> n;

    cin.ignore();

    while (n--) {
        getline(cin, line);

        cout << (char) toupper(line[0]);

        for (int i = 1; i < line.length(); ++i)
            cout << (char) tolower(line[i]);

        cout << '\n';
    }

    return 0;
}
