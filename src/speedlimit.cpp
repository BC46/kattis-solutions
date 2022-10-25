#include <iostream>

int main()
{
    while (true) {
        int n;
        std::cin >> n;

        if (n == -1)
            break;

        int previousElapsedHours(0), miles(0);

        while (n--) {
            int s, t;
            std::cin >> s >> t;

            miles += s * (t - previousElapsedHours);
            previousElapsedHours = t;
        }

        std::cout << miles << " miles" << std::endl;
    }


    return 0;
}
