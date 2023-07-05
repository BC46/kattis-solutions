#include <iostream>

using namespace std;

void setIfLarger(int &largest, const string &numStr) {
    int num = stoi(numStr);

    if (num > largest)
        largest = num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool isNum{};

    string input, numStr;
    int n, largest = 0;

    cin >> n >> input;

    for (const auto &c : input) {
        if (c >= '0' && c <= '9') {
            if (isNum)
                numStr += c;
            else {
                numStr = c;
                isNum = true;
            }
        } else {
            if (isNum)
                setIfLarger(largest, numStr);

            isNum = false;
        }
    }

    if (isNum)
        setIfLarger(largest, numStr);

    cout << largest << '\n';
    return 0;
}
