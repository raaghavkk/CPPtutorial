#include <iostream>

int main() {
    int x = 10;
    int y = x++;      // x = 11, y = 10
    int z = ++x;      // x = 11, y = 11 (when above line commented)
    // when ++(increment) is applied before a variable then it will increase the value of the variable the increment is applied to and store it as well as store the newly incremented value in the newly initiated variable
    std::cout << x;
    return 0;
}