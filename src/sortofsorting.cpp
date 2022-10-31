#include <iostream>
#include <algorithm>
#include <vector>

bool compareFirstTwoChars(const std::string & s1, const std::string & s2)
{
    return s1[0] == s2[0] ? s1[1] < s2[1] : s1[0] < s2[0];
}

int main()
{
    std::vector<std::string> names(200);
    int n;

    while (std::cin >> n && n != 0) {
        for (int i = 0; i < n; ++i)
            std::cin >> names[i];

        std::stable_sort(names.begin(), names.begin() + n, compareFirstTwoChars);

        for (int i = 0; i < n; ++i)
            std::cout << names[i] + "\n";

        std::cout << "\n";
    }

    return 0;
}
