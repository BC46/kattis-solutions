#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string studentInput;
    unordered_map<string, int> students;
    int n, m, k;

    cin >> n;

    while (n--) {
        cin >> studentInput;
        students.emplace(studentInput, 0);
    }

    cin >> m;

    while (m--) {
        cin >> k;

        while (k--) {
            cin >> studentInput;
            auto it = students.find(studentInput);

            it->second++;
        }
    }

    vector<pair<string, int>> studentsVec(students.begin(), students.end());
    sort(studentsVec.begin(), studentsVec.end(),
         [](const pair<string, int> &a, const pair<string, int> &b) { return a.second > b.second; });

    for (auto &s : studentsVec)
        cout << s.second << ' ' << s.first << '\n';

    return 0;
}
