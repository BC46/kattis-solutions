#include <iostream>

int main()
{
    int n;
    std::string s1, s2;
    std::cin >> n >> s1 >> s2;

    bool shouldOverwrite = n % 2 != 0, success = true;

    for (int i = 0; i < s1.length() - 1; ++i) {
        if ((shouldOverwrite && s1[i] == s2[i]) || (!shouldOverwrite && s1[i] != s2[i])) {
            success = false;
            break;
        }
    }

    std::cout << (success ? "Deletion succeeded" : "Deletion failed") << std::endl;
    return 0;
}
