#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int limite_max, base;

 cout << "Ingrese el límite máximo: ";
 cin >> limite_max;

 cout << "Ingrese la base: ";
 cin >> base;

 int potencia = 1;
 while (potencia < limite_max) {
 cout << potencia << endl;
 potencia *= base;
 }

 return 0;
}