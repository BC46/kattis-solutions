#include <iostream>

int main()
{
    int n, m, r;
    std::cin >> n >> m;

    r = m - n;

    if (r >= 0) {
        std::cout << "Dr. Chaz will have " + std::to_string(r) + " piece" + (r == 1 ? "" : "s")
                     +  " of chicken left over!" << std::endl;
    } else {
        r = std::abs(r);

        std::cout << "Dr. Chaz needs " + std::to_string(r) + " more piece" + (r == 1 ? "" : "s")
                     + " of chicken!" << std::endl;
    }

    return 0;
}
