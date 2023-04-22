#include <iostream>

using namespace std;

int main()
{
    string input, result;
    cin >> input;

    int p1 = stoi(input.substr(0, 2)), p2 = stoi(input.substr(3, 2));

    if (p1 > 12)
        result = "EU";
    else if (p2 > 12)
        result = "US";
    else
        result = "either";

    cout << result << endl;
    return 0;
}
