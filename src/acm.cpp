#include <iostream>
#include <map>

struct Entry {
    int attempts{0};
    bool correct{false};
};

int main()
{
    std::map<char, Entry> questions;

    int score(0), correct(0), time;
    char q;
    std::string r;

    while (true) {
        std::cin >> time;
        if (time == -1)
            break;

        std::cin >> q >> r;

        if (questions.find(q) == questions.end()) {
            questions.insert(std::pair<char, Entry>(q, Entry{}));
        }

        if (r == "right" && !questions[q].correct) {
            score += questions[q].attempts * 20;
            score += time;

            questions[q].correct = true;
            ++correct;
        } else {
            questions[q].attempts++;
        }
    }

    std::cout << correct << " " << score << std::endl;
    return 0;
}
