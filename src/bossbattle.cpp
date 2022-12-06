#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;

    cout << (n <= 3 ? 1 : n - 2) << endl;
    return 0;
}
