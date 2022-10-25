#include <iostream>

int main()
{
    int n;
    int score = 0;
    std::cin >> n;

    char answers[n];

    for (size_t i = 0; i < n; i++) {
        char answer;
        std::cin >> answers[i];
    }

    for (size_t i = 0; i < n - 1; i++) {
        if (answers[i] == answers[i + 1])
            ++score;
    }

    std::cout << score << std::endl;
    return 0;
}
