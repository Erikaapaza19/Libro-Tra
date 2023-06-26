#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, result;

    for (x = 0; x <= 5; x += 0.5) {
        result = cos(3*x) - 2*x;
        cout << "Para x = " << x << endl; 
        cout << "el resultado es: " << result << endl;
    }

    return 0;
}