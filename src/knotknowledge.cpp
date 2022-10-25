#include <iostream>
#include <vector>


int main()
{
    int n;
    std::cin >> n;

    std::vector<int> knots;
    std::vector<int> learnedKnots;

    for (size_t i = 0; i < n; i++) {
        int knot;
        std::cin >> knot;
        knots.push_back(knot);
    }

    for (size_t i = 0; i < n - 1; i++) {
        int learnedKnot;
        std::cin >> learnedKnot;
        learnedKnots.push_back(learnedKnot);
    }

    for (int i = 0; i < n; ++i) {
        bool learned{};

        for (int j = 0; j < n - 1; ++j) {
            if (learnedKnots[j] == knots[i]) {
                learned = true;
                break;
            }
        }

        if (!learned) {
            std::cout << knots[i] << std::endl;
            break;
        }
    }

    return 0;
}
