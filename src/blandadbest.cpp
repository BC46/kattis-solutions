#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2) {
        cout << "blandad best";
        return 0;
    }

    string name;
    cin >> name;

    if (name[0] == 'k')
        cout << "kjuklingur";
    else
        cout << "nautakjot";

    return 0;
}
