#include <iostream>

int main()
{
    int n, p, s;
    std::cin >> n >> p >> s;

    for (size_t i = 0; i < s; i++) {
        int m;
        std::cin >> m;

        bool keep = false;

        for (size_t i = 0; i < m; i++) {
            int label;
            std::cin >> label;

            if (label == p)
                keep = true;
        }

        std::cout << (keep ?  "KEEP" : "REMOVE") << std::endl;
    }

    return 0;
}
