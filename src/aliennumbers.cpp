#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tn = 1; tn <= t; ++tn) {
        string alien_number, source_language, target_language, result;
        cin >> alien_number >> source_language >> target_language;

        long long number_value = 0, digits = alien_number.length();

        for (char i : alien_number) {
            number_value += source_language.find(i) * pow(source_language.length(), digits - 1);
            --digits;
        }

        long long digit_amount = 0;

        for (long long i = 0; number_value > i;) {
            ++digit_amount;
            i = pow(target_language.length(), digit_amount) - 1;
        }

        if (digit_amount == 0)
            result += target_language[0];

        for (int i = digit_amount; i > 0; --i) {
            for (int j = target_language.length() - 1; j >= 0; --j) {
                long long val = j * pow(target_language.length(), i - 1);

                if (val <= number_value) {
                    number_value -= val;
                    result.push_back(target_language[j]);
                    break;
                }
            }
        }

        cout << "Case #" << tn << ": " << result << '\n';
    }

    return 0;
}
