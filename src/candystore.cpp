#include <iostream>
#include <map>

using namespace std;

struct NameInfo {
    string name;
    int oc;
};

int main()
{
    map<string, NameInfo> customers;
    string initials, firstName, lastName;

    int n, q;
    cin >> n >> q;

    while (n--) {
        cin >> firstName >> lastName;
        initials = string(1, firstName[0]) + lastName[0];

        auto it = customers.find(initials);

        if (it == customers.end())
            customers.emplace(initials, NameInfo { firstName + ' ' + lastName, 1 });
        else
            it->second.oc++;
    }

    while (q--) {
        cin >> initials;

        auto it = customers.find(initials);

        if (it == customers.end())
            cout << "nobody\n";
        else {
            if (it->second.oc == 1)
                cout << it->second.name << '\n';
            else
                cout << "ambiguous\n";
        }
    }

    return 0;
}
