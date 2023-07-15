#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    cout << "AH" << string(input.size(), 'O') << "W\n";

    return 0;
}
