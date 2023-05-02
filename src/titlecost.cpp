#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c;
    string s;

    cin >> s >> c;

    if (s.length() < c)
        cout << s.length();
    else
        cout << setprecision(11) << c;

    return 0;
}
