#include <iostream>

using namespace std;

void scanInt(unsigned int &x)
{
    x = 0;

    for (unsigned int c = getchar_unlocked(); (c >= '0' && c <= '9'); c = getchar_unlocked())
        x = (x << 1) + (x << 3) + c - '0';
}

int main()
{
    unsigned int i, n, lowest = -1;

    scanInt(n);

    while (n--) {
        scanInt(i);

        if (i < lowest)
            lowest = i;
    }

    printf("%d\n", lowest + 1);

    return 0;
}
