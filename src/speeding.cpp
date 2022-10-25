#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int previousTime(0), previousDistance(0), fastestSpeed(0);

    while (n--) {
        int t, d;
        std::cin >> t >> d;

        if (t > 0 && d > 0) {
            int speed((d - previousDistance) / (t - previousTime));
            if (speed > fastestSpeed) {
                fastestSpeed = speed;
            }
        }

        previousTime = t;
        previousDistance = d;
    }

    std::cout << fastestSpeed << std::endl;
    return 0;
}
