#include <iostream>
#include <map>

using namespace std;

int main()
{
    string item;
    int n;

    map<string, bool> items;
    items.emplace("keys", false);
    items.emplace("phone", false);
    items.emplace("wallet", false);

    cin >> n;

    while (n--) {
        cin >> item;

        auto it = items.find(item);

        if (it != items.end())
            it->second = true;
    }

    bool ready = true;

    for (auto& kv : items) {
        if (!kv.second) {
            cout << kv.first << '\n';
            ready = false;
        }
    }

    if (ready)
        cout << "ready";

    return 0;
}
