#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string input;

    int n;
    bool threeCons = false, sameBlackAndWhite = true;

    cin >> n;

    char hist[n];
    int cCons[n];
    int cBwHist[n];
    memset(&hist, 0x30, sizeof(hist));
    memset(&cCons, 1, sizeof(cCons));
    memset(&cBwHist, 0, sizeof(cBwHist));

    for (int i = 0; i < n; ++i) {
        char prev = '0';
        int rBws = 0, rCons = 1;

        cin >> input;

        for (int j = 0; j < n; ++j) {
            int inc = input[j] == 'W' ? 1 : -1;

            rBws += inc;
            cBwHist[j] += inc;

            if (hist[j] == input[j]) {
                if (++cCons[j] == 3)
                    threeCons = true;
            } else
                cCons[j] = 1;

            if (prev == input[j]) {
                if (++rCons == 3)
                    threeCons = true;
            } else
                rCons = 1;

            hist[j] = prev = input[j];
        }

        if (rBws != 0)
            sameBlackAndWhite = false;
    }

    if (!sameBlackAndWhite) {
        for (int i = 0; i < n; ++i) {
            if (cBwHist[i] != 0)
                sameBlackAndWhite = false;
        }
    }

    cout << (sameBlackAndWhite && !threeCons) << endl;
    return 0;
}
