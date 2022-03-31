#include <iostream>
#include <vector>
#include <iomanip>

double calculateScore(const std::vector<double> &s, int skip) {
    double t(0), nom(1), den(1);

    for (int i(0); i < s.size(); ++i) {
        if (skip == i)
            continue;

        t += s[i] * (nom / den);

        nom *= 4;
        den *= 5;
    }

    return t / 5;
}

int main()
{
    float ns;

    std::vector<double> s{};

    int n;
    std::cin >> n;

    for (int i(0); i < n; ++i) {
        std::cin >> ns;
        s.push_back(ns);
    }

    double t(calculateScore(s, -1)), gi(0);

    for (int i(0); i < n; ++i)
        gi += calculateScore(s, i);

    std::cout << std::setprecision(20) << t << std::endl;
    std::cout << std::setprecision(20) << (gi / n) << std::endl;
    return 0;
}
