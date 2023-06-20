#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, count = 0;
    cin >> n;

    vector<int> arrows(1000000, 0);

    while (n--) {
        cin >> b;

        if (arrows[b - 1] == 0)
            ++count;
        else
            arrows[b - 1]--;

        if (b > 1)
            arrows[b - 2]++;
    }

    cout << count << '\n';
    return 0;
}
