#include <iostream>

using namespace std;

int main()
{
    string guessResult;
    int guess, min = 1, max = 10;

    while (cin >> guess && guess != 0) {
        cin.ignore();
        getline(cin, guessResult);

        if (guessResult == "too high") {
            if (guess - 1 < max)
                max = guess - 1;
        } else if (guessResult == "too low") {
            if (guess + 1 > min)
                min = guess + 1;
        } else {
            cout << "Stan " << (min > max || guess < min || guess > max ? "is dis" : "may be ") << "honest\n";

            min = 1;
            max = 10;
        }
    }

    return 0;
}
