#include <iostream>

char rotChar(const std::string &a, char c, int r) {
    int ci(0);

    for (int i(0); i < a.length(); ++i) {
        if (a[i] == c) {
            ci = i;
            break;
        }
    }

    ci += r;

    return (ci > a.length() - 1 ? a[ci % a.length()] : a[ci]);
}

int main()
{
    int n;
    std::string a("ABCDEFGHIJKLMNOPQRSTUVWXYZ_."), input;

    while (true) {
        std::cin >> n;
        if (n == 0)
            break;

        std::cin >> input;
        std::string r;

        for (int i(static_cast<int>(input.length()) - 1); i >= 0; --i) {
            r += rotChar(a, input[i], n);
        }

        std::cout << r << std::endl;
    }

    return 0;
}
