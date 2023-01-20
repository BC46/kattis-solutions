#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string line;
    unsigned long long n1, n2;

    while (getline(cin, line) && !line.empty()) {
        istringstream iss(line);
        iss >> n1 >> n2;

        cout << max(n1, n2) - min(n1, n2) << endl;
    }

    return 0;
}
