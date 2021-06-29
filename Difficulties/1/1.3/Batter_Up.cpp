#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    float at_bats = 0;
    int bat_amount = n;

    for (size_t i = 0; i < n; i++) {
        int at_bat;
        std::cin >> at_bat;

        if (at_bat == -1) {
            --bat_amount;
        } else {
            at_bats += at_bat;
        }
    }

    std::cout << float(at_bats / bat_amount);
    return 0;
}
