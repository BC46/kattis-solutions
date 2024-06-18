#include <iostream>
#include <set>

using namespace std;

int main()
{
    string input;
    int n, k, result = 0;

    cin >> n >> k;

    while (n--) {
        set<string> p;

        for (int i = 0; i < k; ++i) {
            cin >> input;
            p.emplace(input);
        }

        result += k - p.size();
    }

    cout << result << '\n';

    return 0;
}
