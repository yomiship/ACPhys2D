#include <iostream>
#include "Objects/Square.cpp"

using namespace std;
int main() {
    Square sq1(5, 3);
    cout << sq1.getX() << endl;
    cout << sq1.getVX() << endl;
    
    return 0;
}
