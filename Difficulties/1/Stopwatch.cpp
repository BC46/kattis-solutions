#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    bool on = false;
    int run_time = 0;

    for (size_t i = 0; i < n; i++) {
        int k = 0;
        std::cin >> k;

        if (on) {
            run_time += k;
        } else {
            run_time -= k;
        }

        on = !on;
    }

    if (n % 2 == 0) {
        std::cout << run_time;
    } else {
        std::cout << "still running";
    }

    return 0;
}
