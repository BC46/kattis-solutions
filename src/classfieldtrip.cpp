#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<char, less<>> mergedNames;
    string name, result;

    for (int i = 0; i < 2; ++i) {
        cin >> name;

        for (const auto &c : name)
            mergedNames.insert(c);
    }

    for (const auto &c : mergedNames)
        result += c;

    cout << result << endl;

    return 0;
}
