#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

unordered_map<string, unordered_set<string>> flights;

bool findVisitedFlights(unordered_set<string> &visited, const std::string &origin) {
    auto it = flights.find(origin);

    if (it == flights.end())
        return false;

    for (const auto &fromFlight : it->second) {
        if (visited.find(fromFlight) != visited.end())
            return true;

        visited.emplace(fromFlight);

        if (findVisitedFlights(visited, fromFlight))
            return true;
        else
            visited.erase(fromFlight);
    }

    return false;
}

int main()
{
    string origin, dest;

    int n;
    cin >> n;

    while (n--) {
        cin >> origin >> dest;

        auto it = flights.find(origin);

        if (it == flights.end())
            flights.emplace(origin, unordered_set<string>{dest });
        else
            it->second.emplace(dest);
    }

    while (cin >> origin) {
        unordered_set<string> visited;
        visited.emplace(origin);

        bool found = findVisitedFlights(visited, origin);

        cout << origin << (found ? " safe" : " trapped" ) << '\n';
    }

    return 0;
}
