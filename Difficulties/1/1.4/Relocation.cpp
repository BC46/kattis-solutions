#include <iostream>

int main()
{
    int n, q;
    std::cin >> n >> q;

    int companies[n];

    for (size_t i = 0; i < n; i++) {
        std::cin >> companies[i];
    }

    for (size_t i = 0; i < q; i++) {
        int v1, v2, v3;
        std::cin >> v1 >> v2 >> v3;

        if (v1 == 1) {
            companies[v2 - 1] = v3;
        } else if (v1 == 2) {
            int distance = abs(companies[v2 - 1] - companies[v3 - 1]);
            std::cout << distance << std::endl;
        }
    }
    
    return 0;
}
