#include <iostream>

using namespace std;

int main()
{
    int binaryValue, num, currentSum;

    string input, result;
    cin >> input;

    unsigned int additional = input.length() % 3;

    if (additional > 0)
        input = string(3 - additional, '0') + input;

    for (int i = 2; i < input.length(); i += 3) {
        binaryValue = 4;
        currentSum = 0;

        for (int j = 2; j >= 0; --j) {
            num = (input[i - j] - '0');

            if (num == 1)
                currentSum += binaryValue;

            binaryValue /= 2;
        }

        result += (char) ('0' + currentSum);
    }

    cout << result << endl;
    return 0;
}
