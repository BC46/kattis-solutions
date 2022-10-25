#include <iostream>
#include <math.h>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        float a, b, c;
        std::cin >> a >> b >> c;

        float results[5] = {
            float(a + b),
            float(abs(a - b)),
            float(b * a),
            float(a / b),
            float(b / a)
        };

        bool possible = false;

        for (auto result : results) {
            if (result == c) {
                possible = true;
                break;
            }
        }

        std::cout << (possible ? "Possible" : "Impossible") << std::endl;
    }

    return 0;
}
