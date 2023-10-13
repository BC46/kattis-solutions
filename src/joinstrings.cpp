#include <iostream>

using namespace std;

struct Node {
    string str;
    Node *next = nullptr, *last = nullptr;
};

void connect(Node &a, Node &b) {
    if (b.last == nullptr)
        a.last = &b;
    else
        a.last = b.last;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int n, a, b;
    cin >> n;

    Node nodes[n];

    for (int i = 0; i < n; ++i)
        cin >> nodes[i].str;

    for (int i = 0; i < n - 1; ++i) {
        cin >> a >> b;

        if (nodes[a - 1].last != nullptr)
            nodes[a - 1].last->next = &nodes[b - 1];
        else
            nodes[a - 1].next = &nodes[b - 1];

        connect(nodes[a - 1], nodes[b - 1]);
    }

    Node* final = n == 1 ? &nodes[0] : &nodes[a - 1];

    while (final != nullptr) {
        cout << final->str;
        final = final->next;
    }

    return 0;
}
