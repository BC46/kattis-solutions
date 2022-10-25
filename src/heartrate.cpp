#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int b;
        float p;
        std::cin >> b >> p;

        float bpm = b * 60 / p;
        float bpm_margin = bpm / b;

        std::cout << bpm - bpm_margin << ' ';
        std::cout << bpm << ' ';
        std::cout << bpm + bpm_margin << ' ' << std::endl;
    }
}
