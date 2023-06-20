#include <iostream>
#include <unordered_map>

using namespace std;

string result;

void insertResult(unordered_map<string, int> &j) {
    cin >> result;
    auto it = j.find(result);

    if (it == j.end())
        j.emplace(result, 1);
    else
        it->second++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> dj, k;

    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
        insertResult(dj);

    for (int i = 0; i < n; ++i)
        insertResult(k);

    for (const auto &r : k) {
        auto it = dj.find(r.first);

        if (it != dj.end())
            total += min(r.second, it->second);
    }

    cout << total << '\n';
    return 0;
}
