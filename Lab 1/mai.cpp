#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y = 1.45, x = 1.64;
    double d = y - x;

    // Обчислення прямо в одній змінній
    double b = 1 + abs(d) + (d * d / 2) + (d * d * d / 3);

    cout << "b = " << b << endl;

    return 0;
}
