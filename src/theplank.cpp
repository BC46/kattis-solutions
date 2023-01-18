#include <iostream>

using namespace std;

void addPiece(int l, int n, int current, int &combos) {
    if (l + current > n)
        return;

    current = l + current;

    if (current == n) {
        ++combos;
        return;
    }

    addPiece(1, n, current, combos);
    addPiece(2, n, current, combos);
    addPiece(3, n, current, combos);
}

int main()
{
    int n, current = 0, combos = 0;
    cin >> n;

    addPiece(1, n, current, combos);
    addPiece(2, n, current, combos);
    addPiece(3, n, current, combos);

    cout << combos << endl;
    return 0;
}
