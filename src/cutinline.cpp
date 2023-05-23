#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    string event, p, b;
    list<string> line;

    int n;
    cin >> n;

    while (n--) {
        cin >> p;
        line.push_back(p);
    }

    cin >> n;

    while (n --) {
        cin >> event;

        cin >> p;
        line.remove(p);

        if (event == "leave")
            continue;

        cin >> b;

        auto it = find(line.begin(), line.end(), b);
        line.insert(it, p);
    }

    for (const auto &person : line)
        cout << person << endl;

    return 0;
}
