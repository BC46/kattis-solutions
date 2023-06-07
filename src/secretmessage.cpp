#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    string message;

    int n;
    cin >> n;

    while (n--) {
        cin >> message;

        int smallestSquare, squareRoot = sqrt(message.length());

        if (squareRoot * squareRoot != message.length())
            ++squareRoot;

        smallestSquare = squareRoot * squareRoot;

        char table[squareRoot][squareRoot];
        memset(&table, '*', sizeof(table));

        for (int i = 0; i < message.length(); ++i)
            table[i / smallestSquare][i % smallestSquare] = message[i];

        string result;

        for (int y = 0; y < squareRoot; ++y) {
            int xReverse = squareRoot - 1;

            for (int x = 0; x < squareRoot; ++x) {
                if (table[xReverse][y] != '*')
                    result += table[xReverse][y];

                --xReverse;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
