#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Date {
    int m, d;
};

int getVal(int m, int s) {
    return m * 100 + s;
}

struct Sign {
    string name;
    Date s, e;
};

int main()
{
    unordered_map<string, int> months = {
            { "Jan", 1 },
            { "Feb", 2 },
            { "Mar", 3 },
            { "Apr", 4 },
            { "May", 5 },
            { "Jun", 6 },
            { "Jul", 7 },
            { "Aug", 8 },
            { "Sep", 9 },
            { "Oct", 10 },
            { "Nov", 11 },
            { "Dec", 12 }
    };

    vector<Sign> signs = {
            { "Aries", { 3, 21 }, { 4, 20 } },
            { "Taurus", { 4, 21 }, { 5, 20 } },
            { "Gemini", { 5, 21 }, { 6, 21 } },
            { "Cancer", { 6, 22 }, { 7, 22 } },
            { "Leo", { 7, 23 }, { 8, 22 } },
            { "Virgo", { 8, 23 }, { 9, 21 } },
            { "Libra", { 9, 22 }, { 10, 22 } },
            { "Scorpio", { 10, 23 }, { 11, 22 } },
            { "Sagittarius", { 11, 23 }, { 12, 21 } },
            { "Capricorn", { 12, 22 }, { 12, 31 } },
            { "Capricorn", { 1, 1 }, { 1, 20 } },
            { "Aquarius", { 1, 21 }, { 2, 19 } },
            { "Pisces", { 2, 20 }, { 3, 20 } }
    };

    string m;
    int t, d, mn, dv;

    cin >> t;

    while (t--) {
        cin >> d >> m;

        mn = months.find(m)->second;
        dv = getVal(mn, d);

        for (const auto & s : signs) {
            if (getVal(s.s.m, s.s.d) <= dv && dv <= getVal(s.e.m, s.e.d)) {
                cout << s.name << '\n';
                break;
            }
        }
    }

    return 0;
}
