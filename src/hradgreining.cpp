#include <iostream>

using namespace std;

int main()
{
    string dna;
    cin >> dna;

    cout << (dna.find("COV") == string::npos ? "Ekki veikur!" : "Veikur!") << '\n';

    return 0;
}
