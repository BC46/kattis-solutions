#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

struct Country {
    vector<int> tripYears;
    bool sorted = false;

    explicit Country(int year) {
        addTrip(year);
    }

    void addTrip(int year) {
        tripYears.emplace_back(year);
    }

    int getYear(int index) {
        if (!sorted) {
            sort(tripYears.begin(), tripYears.end());
            sorted = true;
        }

        return tripYears[index - 1];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string country;

    int n, q, year, idx;
    cin >> n;

    unordered_map<string, Country> trips;

    while (n--) {
        cin >> country >> year;

        auto it = trips.find(country);

        if (it == trips.end())
            trips.emplace(country, year);
        else
            it->second.addTrip(year);
    }

    cin >> q;

    while (q--) {
        cin >> country >> idx;

        cout << trips.find(country)->second.getYear(idx) << '\n';
    }

    return 0;
}
