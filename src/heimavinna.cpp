#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sum = 0;

    string input;
    cin >> input;

    int i = 0;
    while (i < input.length()) {
        int section_end = input.find(';', i);

        if (section_end == string::npos) {
            section_end = input.length();
        }

        string section = input.substr(i, section_end - i);

        int separator_position = section.find('-');

        if (separator_position == string::npos) {
            sum++;
        } else {
            string first_number = section.substr(0, separator_position);
            string second_number = section.substr(separator_position + 1);

            sum += stoi(second_number) - stoi(first_number) + 1;
        }

        i += section.length() + 1;
    }

    cout << sum << endl;

    return 0;
}
