#include <iostream>

using namespace std;

int main()
{
    int ni, mi;
    string n, m, nr, mr;
    cin >> n >> m;

    unsigned int nOffset = n.length() > m.length() ? n.length() - m.length() : 0;
    unsigned int mOffset = m.length() > n.length() ? m.length() - n.length() : 0;

    if (nOffset > 0)
        nr = n.substr(0, nOffset);
    if (mOffset > 0)
        mr = m.substr(0, mOffset);

    for (int i = 0; i < n.length() && i < m.length(); ++i) {
        ni = n[i + nOffset] - '0';
        mi = m[i + mOffset] - '0';

        if (ni >= mi)
            nr += n[i + nOffset];
        if (mi >= ni)
            mr += m[i + mOffset];
    }

    if (nr.empty())
        nr = "YODA";
    else
        nr = to_string(stoi(nr));

    if (mr.empty())
        mr = "YODA";
    else
        mr = to_string(stoi(mr));

    cout << nr << endl << mr << endl;
    return 0;
}
