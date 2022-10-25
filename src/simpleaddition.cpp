#include <iostream>
#include <string>

int main()
{
    bool hasCarry{};

    std::string l1, l2, r;
    std::cin >> l1 >> l2;

    int c1(static_cast<int>(l1.length() - 1)), c2(static_cast<int>(l2.length() - 1)), sum;

    for (; (c1 >= 0 && c2 >= 0) || (hasCarry);) {
        sum = 0;

        if (c1 >= 0)
            sum += (l1[c1--] - '0');
        if (c2 >= 0)
            sum += (l2[c2--] - '0');

        if (hasCarry) {
            ++sum;
            hasCarry = false;
        }

        if (sum > 9) {
            hasCarry = true;
            sum -= 10;
        }

        r.insert(0, std::to_string(sum));
    }

    if (c1 >= 0)
        r = l1.substr(0, c1 + 1) + r;
    else if (c2 >= 0)
        r = l2.substr(0, c2 + 1) + r;

    std::cout << r << std::endl;

    return 0;
}
