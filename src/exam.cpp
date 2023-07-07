#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mx, fx;

    int k, commonAns = 0, commonCorrect = 0;
    cin >> k >> mx >> fx;

    for (int i = 0; i < mx.size(); ++i) {
        if (mx[i] == fx[i]) {
            ++commonAns;

            if (k > 0) {
                --k;
                ++commonCorrect;
            }
        }
    }

    cout << commonCorrect + mx.size() - commonAns - k << '\n';

    return 0;
}
