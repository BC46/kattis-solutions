#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

int main()
{
    string name, orders, order;
    int n;

    while (cin >> n && n > 0) {
        map<string, multiset<string>> report{};

        while (n--) {
            cin >> name;

            cin.ignore();
            getline(cin, orders);

            istringstream iss(orders);
            while (iss >> order) {
                auto it = report.find(order);

                if (it == report.end())
                    report.insert({ order, multiset<string>{ name } });
                else
                    it->second.insert(name);
            }
        }

        for (const auto & it: report) {
            cout << it.first + " ";

            for (const auto &o : it.second)
                cout << o + " ";

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
