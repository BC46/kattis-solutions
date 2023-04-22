#include <iostream>
#include <sstream>

using namespace std;

int getTotalMinutes(const string &s) {
    int total = 0, firstValueLength, secondValueStartIndex;

    if (s.length() == 4) {
        firstValueLength = 1;
        secondValueStartIndex = 2;
    } else {
        firstValueLength = 2;
        secondValueStartIndex = 3;
    }

    total += stoi(s.substr(0, firstValueLength)) * 60;
    total += stoi(s.substr(secondValueStartIndex, 2));

    return total;
}

int main()
{
    string line, m, d, y, t1, t2;

    while (getline(cin, line) && !line.empty()) {
        istringstream iss(line);
        iss >> m >> d >> y >> t1 >> t2;

        int t1m = getTotalMinutes(t1), t2m = getTotalMinutes(t2);

        int minutesDiff = t2m - t1m;
        int hoursDiff = minutesDiff / 60;
        minutesDiff %= 60;

        cout << m << " " << d << " " << y << " " << hoursDiff << " hours " << minutesDiff << " minutes" << endl;
    }

    return 0;
}
