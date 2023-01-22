#include <iostream>

using namespace std;

int main()
{
    string rn, r, dn;
    int n, k;
    cin >> n;

    while (n--) {
        cin >> k;
        cin.ignore();
        getline(cin, rn);

        bool hasPeaSoup{}, hasPancakes{};

        while (k--) {
            getline(cin, dn);

            if (!hasPeaSoup && dn == "pea soup")
                hasPeaSoup = true;
            else if (!hasPancakes && dn == "pancakes")
                hasPancakes = true;

            if (r.empty() && hasPeaSoup && hasPancakes)
                r = rn;
        }
    }

    cout << (r.empty() ? "Anywhere is fine I guess" : r) << endl;
    return 0;
}
