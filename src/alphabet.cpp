#include <iostream>

using namespace std;

string s;

int check(char last, int i, int streak) {
    if (i == s.size() || streak == 26)
        return streak;

    if (last + 1 == s[i]) {
        return check(s[i], i + 1, streak + 1);
    } else if (last < s[i]) {
        int skipResult = check(last, i + 1, streak);
        int continueResult = check(s[i], i + 1, streak + 1);

        return max(skipResult, continueResult);
    }

    return check(last, i + 1, streak);
}

int main()
{
    int longestStreak = 1;

    cin >> s;

    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1])
            continue;

        int streak = check(s[i], i + 1, 1);

        if (streak > longestStreak)
            longestStreak = streak;
    }

    cout << 26 - longestStreak << '\n';

    return 0;
}
