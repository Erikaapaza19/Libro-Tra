#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n, num;
    int max_num = INT_MIN;  
    int min_num = INT_MAX;  
    int sum = 0;

    cout << "Ingrese el número de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> num;

        if (num > max_num) {
            max_num = num;
        }

        if (num < min_num) {
            min_num = num;
        }

        sum += num;
    }

    double media = static_cast<double>(sum) / n;

    cout << "El número más grande es: " << max_num << endl;
    cout << "El número más pequeño es: " << min_num << endl;
    cout << "La media es: " << media << endl;

    return 0;
}