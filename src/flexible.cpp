#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int w, p;
    cin >> w >> p;

    set<int> widths;
    widths.emplace(w);

    vector<int> parts(p);

    for (auto &part : parts) {
        cin >> part;

        widths.emplace(part);
        widths.emplace(w - part);
    }

    for (int i = 0; i < p - 1; ++i) {
        for (int j = i + 1; j < p; ++j) {
            widths.emplace(abs(parts[i] - parts[j]));
        }
    }

    for (const auto &width : widths)
        cout << width << ' ';

    return 0;
}
