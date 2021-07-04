#include <iostream>

int main()
{
    int largest_width = 0;

    int w, n;
    std::cin >> w >> n;

    for (size_t i = 0; i < n; i++) {
        int wi, li;
        std::cin >> wi >> li;

        largest_width += wi * li;
    }

    std::cout << largest_width / w << std::endl;
    return 0;
}
