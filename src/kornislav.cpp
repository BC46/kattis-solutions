#include <iostream>

int main()
{
    int distances[4];
    std::cin >> distances[0] >> distances[1] >> distances[2] >> distances[3];

    int area = 0;

    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            if (i == j) continue;

            for (size_t k = 0; k < 4; k++) {
                if (i == k || j == k) continue;

                for (size_t l = 0; l < 4; l++) {
                    if (i == l || j == l || k == l) continue;

                    int x = distances[i] - distances[k];
                    int y = distances[j] - distances[l];

                    if (x <= 0 && y <= 0) {
                        int new_area = distances[i] * distances[j];

                        if (new_area > area)
                            area = new_area;
                    }
                }
            }
        }
    }

    std::cout << area << std::endl;

    return 0;
}
