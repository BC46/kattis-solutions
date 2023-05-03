#include <iostream>
#include <vector>

using namespace std;

struct Ingredient {
    string name;
    double percentage;

    Ingredient(string name, double percentage)
            : name(std::move(name)), percentage(percentage)
    {}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name, sep = string(40, '-') + '\n';
    double weight, percentage, mainWeight, calcWeight;

    int t, r, p, d;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cin >> r >> p >> d;

        vector<Ingredient> ingredients{};

        while (r--) {
            cin >> name >> weight >> percentage;
            ingredients.emplace_back(name, percentage);

            if (percentage == 100)
                mainWeight = weight;
        }

        double sF = (double) d / (double) p;
        double sW = mainWeight * sF / 100.0;

        cout << "Recipe # " + to_string(i) + '\n';

        for (const auto &ingredient : ingredients) {
            calcWeight = ingredient.percentage * sW;

            cout << ingredient.name + ' ' + to_string(calcWeight) + '\n';
        }

        cout << sep;
    }

    return 0;
}
