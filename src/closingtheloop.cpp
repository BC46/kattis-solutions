#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    int bR[1000], rR[1000];
    char color;
    int n, s, length, smallestLength, largestLength;

    cin >> n;

    for (int c = 1; c <= n; ++c) {
        int* largest;
        int bRLen = 0, rRLen = 0, loopLength = 0;

        cin >> s;

        while (s--) {
            cin >> length >> color;

            if (color == 'B')
                bR[bRLen++] = length;
            else
                rR[rRLen++] = length;
        }

        if (bRLen > rRLen) {
            smallestLength = rRLen;
            largestLength = bRLen;
            largest = bR;
        } else {
            smallestLength = bRLen;
            largestLength = rRLen;
            largest = rR;
        }

        sort(largest, largest + largestLength, greater());

        for (int i = 0; i < smallestLength; ++i)
            loopLength += rR[i] + bR[i] - 2;

        cout << "Case #" << c << ": " << loopLength << endl;
    }

    return 0;
}
