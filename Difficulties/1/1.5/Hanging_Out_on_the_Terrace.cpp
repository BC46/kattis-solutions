#include <iostream>

int main()
{
    std::string eventType;
    int l, x, p, current(0), denies(0);
    std::cin >> l >> x;

    while (x--) {
        std::cin >> eventType >> p;

        if (eventType == "enter") {
            if (current + p > l)
                ++denies;
            else
                current += p;
        } else if (eventType == "leave")
            current -= p;
    }

    std::cout << denies << std::endl;
    return 0;
}
