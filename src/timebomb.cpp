#include <iostream>
#include <vector>

using namespace std;

vector<string> nums {
        "***  ******** ****************",
        "* *  *  *  ** **  *    ** ** *",
        "* *  ****************  *******",
        "* *  **    *  *  ** *  ** *  *",
        "***  *******  *******  *******"
};

bool getNumber(char &c, const vector<string> &num) {
    string lineToCmp;
    bool found{};

    for (int i = 0; i <= 9; ++i) {
        bool isEqual = true;

        for (int j = 0; j < 5; ++j) {
            lineToCmp = nums[j].substr(i * 3, 3);

            if (num[j] != lineToCmp) {
                isEqual = false;
                break;
            }
        }

        if (isEqual) {
            c = '0' + i;
            found = true;
        }
    }

    return found;
}

int main()
{
    bool invalid{};
    char c;
    string code, result;
    vector<string> lines(5);

    for (int i = 0; i < 5; ++i) {
        getline(cin, lines[i]);
    }

    for (int i = 0; i < 8; ++i) {
        if (i * 4 > lines[0].length() - 1)
            break;

        vector<string> currentNum(5);

        for (int j = 0; j < 5; ++j)
            currentNum[j] = lines[j].substr(i * 4, 3);

        if (getNumber(c, currentNum))
            code += c;
        else {
            invalid = true;
            break;
        }
    }

    if (invalid)
        result = "BOOM";
    else
        result = stoi(code) % 6 == 0 ? "BEER" : "BOOM";

    cout << result << "!!" << endl;
    return 0;
}
