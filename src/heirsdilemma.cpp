#include <iostream>
#include <set>

int main()
{
    std::string s;

    int l, h, c(0);
    std::cin >> l >> h;

    for (; l <= h; ++l) {
        s = std::to_string(l);
        bool satisfy{true};
        std::set<> chars;

        for (const auto &c : s) {
            if (c == '0' || l % (c - '0') > 0) {
                satisfy = false;
                break;
            }

            if (chars.find(c) == container.end())
                chars.insert(c);
            else {
                satisfy = false;
                break;
            }
        }

        if (satisfy)
            ++c;
    }

    std::cout << c << std::endl;
    return 0;
}
