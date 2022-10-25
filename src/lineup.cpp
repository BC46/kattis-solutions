#include <iostream>

int compareAlphabeticalOrder(const std::string &first, const std::string &second) {
    int result;

    for (int i(0); i < second.length(); ++i) {
        if (first[i] < second[i]) {
            result = -1;
            return result;
        } else if (first[i] > second[i]) {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}

int main()
{
    bool canIncrease{true}, canDecrease{true};

    int n, comparisonResult;
    std::cin >> n;

    std::string name, last;

    --n;
    std::cin >> last;

    while (n--) {
        std::cin >> name;

        comparisonResult = compareAlphabeticalOrder(name, last);

        if (comparisonResult == -1) {
            canIncrease = false;
        } else if (comparisonResult == 1) {
            canDecrease = false;
        }

        last = name[0];
    }

    if (!canIncrease && !canDecrease) {
        std::cout << "NEITHER" << std::endl;
    } else if (canIncrease) {
        std::cout << "INCREASING" << std::endl;
    } else {
        std::cout << "DECREASING" << std::endl;
    }

    return 0;
}
