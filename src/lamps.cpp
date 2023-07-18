#include <iostream>

using namespace std;

class Light {
public:
    explicit Light(int power, int life, int price)
        : power(power), currentLife(life), totalLife(life), price(price), cost((double) price)
    {}

    double use(int hours, int electricityPrice) {
        cost += (power * hours * electricityPrice) / 100000.0;
        currentLife -= hours;

        if (currentLife < 0) {
            currentLife += totalLife;
            cost += price;
        }

        return cost;
    }

private:
    const int totalLife, price, power;
    int currentLife;
    double cost;
};

int main()
{
    Light bulb(60, 1000, 5), lamp(11, 8000, 60);
    int h, p, days = 1;

    cin >> h >> p;

    while (lamp.use(h, p) > bulb.use(h, p))
        ++days;

    cout << days << '\n';

    return 0;
}
