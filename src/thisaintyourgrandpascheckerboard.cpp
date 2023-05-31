#include <iostream>
#include <cstring>

using namespace std;

bool is3Consecutive(const char &prev, const char &input, int &cons) {
    if (prev == input) {
        if (++cons == 3) {
            return true;
        }
    } else
        cons = 1;

    return false;
}

int main()
{
    string input;

    int n;
    bool threeCons = false, sameBlackAndWhite = true;

    cin >> n;

    char hist[n];
    int cCons[n], cBwHist[n];
    memset(&hist, 0x30, sizeof(hist));
    memset(&cCons, 1, sizeof(cCons));
    memset(&cBwHist, 0, sizeof(cBwHist));

    for (int i = 0; i < n; ++i) {
        cin >> input;

        if (!sameBlackAndWhite || threeCons)
            continue;

        char prev = '0';
        int rBws = 0, rCons = 1;

        for (int j = 0; j < n; ++j) {
            int inc = input[j] == 'W' ? 1 : -1;

            rBws += inc;
            cBwHist[j] += inc;

            if (threeCons = (is3Consecutive(hist[j], input[j], cCons[j]) || is3Consecutive(prev, input[j], rCons)))
                break;

            hist[j] = prev = input[j];
        }

        if (rBws != 0)
            sameBlackAndWhite = false;
    }

    for (int i = 0; i < n && sameBlackAndWhite; ++i) {
        if (cBwHist[i] != 0)
            sameBlackAndWhite = false;
    }

    cout << (sameBlackAndWhite && !threeCons) << endl;
    return 0;
}
