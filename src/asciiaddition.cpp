#include <iostream>
#include <vector>

using namespace std;

vector<string> values {
        "xxxxx....xxxxxxxxxxxx...xxxxxxxxxxxxxxxxxxxxxxxxxx.....",
        "x...x....x....x....xx...xx....x........xx...xx...x..x..",
        "x...x....x....x....xx...xx....x........xx...xx...x..x..",
        "x...x....xxxxxxxxxxxxxxxxxxxxxxxxxx....xxxxxxxxxxxxxxxx",
        "x...x....xx........x....x....xx...x....xx...x....x..x..",
        "x...x....xx........x....x....xx...x....xx...x....x..x..",
        "xxxxx....xxxxxxxxxxx....xxxxxxxxxxx....xxxxxxxxxxx....."
};

int getValueIndex(const vector<string> &num) {
    string lineToCmp;

    for (int i = 0; i < 11; ++i) {
        bool isEqual = true;

        for (int j = 0; j < 7; ++j) {
            lineToCmp = values[j].substr(i * 5, 5);

            if (num[j] != lineToCmp) {
                isEqual = false;
                break;
            }
        }

        if (isEqual)
            return i;
    }

    return 0;
}

int main()
{
    vector<string> lines(7);
    vector<string> numsStr(2);
    string* currentNumStr = &numsStr[0];

    for (auto &line : lines)
        getline(cin, line);

    for (int i = 0; i * 6 <= lines[0].length() - 1; ++i) {
        vector<string> currentNum(7);

        for (int j = 0; j < 7; ++j)
            currentNum[j] = lines[j].substr(i * 6, 5);

        int valueIndex = getValueIndex(currentNum);

        if (valueIndex == 10)
            currentNumStr = &numsStr[1];
        else
            *currentNumStr += (char) ('0' + valueIndex);
    }

    string sum = to_string(stoi(numsStr[0]) + stoi(numsStr[1]));

    for (int i = 0; i < 7; ++i) {
        string result;

        for (int j = 0; j < sum.length(); ++j) {
            int numIndex = sum[j] - '0';
            result += values[i].substr(numIndex * 5, 5);

            if (j < sum.length() - 1)
                result += '.';
        }

        cout << result << '\n';
    }

    return 0;
}
