#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;
    cout << "Insert radius of circle: ";
    double r;
    cin >> r;
    double area = pi * pow(r,2);
    cout << "Area of circle = " << area;
}