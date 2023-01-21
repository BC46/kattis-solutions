#include <iostream>

using namespace std;

struct Corner {
    bool b{};
    int t = 8;
};

bool canChew(const Corner &c) {
    return !(c.b) && c.t > 0;
}

int main()
{
    Corner upperLeft{}, lowerLeft{}, upperRight{}, lowerRight{};
    Corner* current;

    string tooth;
    char t;
    int n, result;
    cin >> n;

    while (n--) {
        cin >> tooth >> t;

        if (tooth[0] == '+') current = &upperLeft;
        else if (tooth[0] == '-') current = &lowerLeft;
        else if (tooth[1] == '+') current = &upperRight;
        else if (tooth[1] == '-') current = &lowerRight;

        if (t == 'm')
            current->t--;
        else if (t == 'b')
            current->b = true;
    }

    if (canChew(upperLeft) && canChew(lowerLeft))
        result = 0;
    else if (canChew(upperRight) && canChew(lowerRight))
        result = 1;
    else
        result = 2;

    cout << result << endl;
    return 0;
}
