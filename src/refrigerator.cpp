#include <iostream>
#include <vector>

using namespace std;

struct Car {
    int cost, capacity;
};

struct TableEntry {
    int carAmounts[2] = { 0, 0 }, totalCost = 0, coveredCapacity = 0;

    void addCar(int i, const Car& car) {
        carAmounts[i]++;
        coveredCapacity += car.capacity;
        totalCost += car.cost;
    }
};

TableEntry knapsack(const vector<Car> &cars, int n) {
    vector<TableEntry> table(n + 1);

    for (int i = 1; i <= n; ++i) {
        table[i] = table[i - 1];

        for (int j = 0; j < 2; ++j) {
            if (table[i].coveredCapacity < i) {
                table[i].addCar(j, cars[j]);
            }

            if (i >= cars[j].capacity) {
                TableEntry &previous = table[i - cars[j].capacity];

                if (table[i].totalCost > previous.totalCost + cars[j].cost) {
                    table[i] = previous;
                    table[i].addCar(j, cars[j]);
                }
            }
        }
    }

    return table[n];
}

int main()
{
    vector<Car> cars(2);
    int n;

    cin >> cars[0].cost >> cars[0].capacity >> cars[1].cost >> cars[1].capacity >> n;

    TableEntry result = knapsack(cars, n);
    cout << result.carAmounts[0] << ' ' << result.carAmounts[1] << ' ' << result.totalCost << '\n';

    return 0;
}
