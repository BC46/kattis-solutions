#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    int rolls[2];
    int score;

    void calculateScore() {
        sort(rolls, rolls + 2, greater<>());

        if (rolls[0] == 2 && rolls[1] == 1)
            score = 1000;
        else if (rolls[0] == rolls[1])
            score = rolls[0] * 100;
        else
            score = rolls[0] * 10 + rolls[1];
    }

    bool zero() {
        return rolls[0] == 0 && rolls[1] == 0;
    }
};

int main()
{
    Player p1, p2;

    while (cin >> p1.rolls[0] >> p1.rolls[1] >> p2.rolls[0] >> p2.rolls[1] && !p1.zero() && !p2.zero()) {
        p1.calculateScore();
        p2.calculateScore();

        if (p1.score == p2.score)
            cout << "Tie.\n";
        else
            cout << "Player " << (p1.score > p2.score ? 1 : 2) << " wins.\n";
    }

    return 0;
}
