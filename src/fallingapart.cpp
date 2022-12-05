#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a = 0, b = 0;
    std::cin >> n;

    vector<int> pieces(n);

    for (int i = 0; i < n; ++i)
        std::cin >> pieces[i];

    sort(pieces.begin(), pieces.end(), greater());

    for (int i = 0; i < n - 1; i += 2) {
        a += pieces[i];
        b += pieces[i + 1];
    }

    if (n % 2 > 0)
        a += pieces[n - 1];

    cout << a << " " << b << endl;
    return 0;
}
