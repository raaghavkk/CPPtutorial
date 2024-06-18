#include <iostream>

int main() {
    int x = 10;
    int y = 20;
    int z = 5;
    // standard output stream - std::cout - stream means a sequence of characters
    // << these double angled brackets are the stream insertion operator - it's an operator to insert something to our output stream
    std::cout << "x = ";
    std::cout << x << std::endl;
    // we can chain multiple stream insertion operators as shown below
    std::cout << "y = " << y << std::endl << "-----------" << std::endl;
    // we can combine this information to create a simplified print statement like this :
    std::cout << "x = " << x << std::endl
              << "y = " << y << std::endl
              << "z = " << z;
    return 0;
}