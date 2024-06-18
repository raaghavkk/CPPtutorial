#include <iostream>

int main() {
    // () has highest priority
    // * and / have higher priority than
    // + and -
    double x = 10;
    double y = 5;
    double z = 0;
    z = (x+10)/(3*y);
    std::cout << z;
    return 0;
}