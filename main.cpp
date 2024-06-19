#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /* since we are using a brace initialiser, it will not compile the incorrect data associated to the wrong data type
     *normal initialiser is '=' where we would assign a integer variable like int number = 1.2;
     */
    int number {1.2};
    cout << number;
    return 0;
}