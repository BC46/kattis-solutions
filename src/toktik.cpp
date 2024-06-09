#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string name, highestName;
    int views, highestViews = 0;

    unordered_map<string, int> creators;
    int n;

    cin >> n;

    while (n--) {
        cin >> name >> views;

        auto it = creators.find(name);

        if (it == creators.end())
            creators.emplace(name, views);
        else
            it->second += views;
    }

    for (auto &kv : creators) {
        if (kv.second > highestViews) {
            highestViews = kv.second;
            highestName = kv.first;
        }
    }

    cout << highestName << '\n';

    return 0;
}
