#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string op;

    int n, v1, v2;
    int mem[32];

    while (cin >> n && n > 0) {
        memset(mem, 0xFF, sizeof(mem));

        while (n--) {
            cin >> op >> v1;

            if (op == "SET")
                mem[v1] = 1;
            else if (op == "CLEAR")
                mem[v1] = 0;
            else if (op == "OR") {
                cin >> v2;

                if (mem[v1] == 0 && mem[v2] == 0)
                    mem[v1] = 0;
                else if (mem[v1] == 1 || mem[v2] == 1)
                    mem[v1] = 1;
                else
                    mem[v1] = -1;
            } else {
                cin >> v2;

                if (mem[v1] == 0 || mem[v2] == 0)
                    mem[v1] = 0;
                else if (mem[v1] == 1 && mem[v2] == 1)
                    mem[v1] = 1;
                else
                    mem[v1] = -1;
            }
        }

        for (int i = 31; i >= 0; --i) {
            if (mem[i] == -1)
                cout << '?';
            else
                cout << (mem[i] == 1 ? '1' : '0');
        }

        cout << '\n';
    }
    return 0;
}
