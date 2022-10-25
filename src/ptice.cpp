#include <iostream>
#include <vector>

struct Applicant {
    std::string name;
    std::string seq;
    int score {0};
};

int main()
{
    std::vector<Applicant> applicants {
            Applicant{ "Adrian", "ABC" },
            Applicant{ "Bruno", "BABC" },
            Applicant{ "Goran", "CCAABB" }
    };

    std::string q;
    int n, m;
    std::cin >> n >> q;

    for (int i(0); i < n; ++i) {
        for (auto &a : applicants) {
            if (q[i] == a.seq[i % a.seq.length()])
                ++a.score;
        }
    }

    const Applicant* highest(&applicants[0]);
    for (const auto &a : applicants) {
        if (a.score > highest->score)
            highest = &a;
    }

    m = highest->score;
    std::cout << m << std::endl;

    for (const auto &a : applicants) {
        if (a.score == m)
            std::cout << a.name << std::endl;
    }

    return 0;
}
