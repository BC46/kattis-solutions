#include <iostream>

using namespace std;

int main()
{
    int n, fun, bestFun = 0;
    string name, bestName;

    cin >> n;

    while (n--) {
        cin >> name >> fun;

        if (fun > bestFun) {
            bestFun = fun;
            bestName = name;
        }
    }

    cout << bestName << '\n';

    return 0;
}
