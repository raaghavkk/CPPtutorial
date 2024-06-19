#include <iostream>

using namespace std;

int main() {
    cout << "Enter Fahrenheit temperature: " << endl;
    double f;
    cin >> f;
    double c = (f - 32) / 1.8;
    cout << "The Temperature in degrees celsius is: " << c;
    return 0;
}