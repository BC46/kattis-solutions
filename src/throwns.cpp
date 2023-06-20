#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> posHist;
    posHist.push(0);

    string input;

    int n, k, inputInt, pos = 0;
    cin >> n >> k;

    while (k--) {
        cin >> input;

        if (input == "undo") {
            cin >> input;

            inputInt = stoi(input);

            while (inputInt--)
                posHist.pop();

            pos = posHist.top();
            continue;
        }

        inputInt = stoi(input);

        if (inputInt < 0) {
            inputInt = -(abs(inputInt) % n);

            pos += inputInt;

            if (pos < 0)
                pos += n;
        } else {
            pos += inputInt % n;

            if (pos >= n)
                pos %= n;
        }

        posHist.push(pos);
    }

    cout << pos << '\n';
    return 0;
}
