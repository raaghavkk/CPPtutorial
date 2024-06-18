#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    int z = 5;
    // we can simplify the previous code even more by using namespace std so we don't have to call all std objects anywhere in the code
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
    return 0;
}