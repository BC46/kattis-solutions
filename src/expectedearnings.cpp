#include <iostream>

using namespace std;

int main()
{
    string result = "spela";

    double n, k, p;
    cin >> n >> k >> p;

    if (n * p >= k)
        result += " inte!";

    cout << result << endl;
    return 0;
}
