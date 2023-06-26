#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    int i, j, n; 

    do {
        cout <<"valor de n positivo ";
        cin >>n;
        }
    while (n <= 0);            // termina la lectura de n
    for (i = n; i >= 1; i--)
    {                           // para cada una de las filas descendentemente
        for (j = 1 ; j <= i; j++) // para cada una de las columnas
            cout <<"   " << j; 
        cout << endl; // salta de línea
    }
    system("PAUSE");
    return 0; 

}