#include <iostream>
#include <conio.h>
using namespace std; 

int main(){
    int n, suma = 0;

    cout << "en valor de n es: "; 
    cin >> n;

    for(int i=1; i<= n; i++)
    {
        suma += i; 
    }

    cout << " el valoe de la suma es: " << suma << endl; 

 getch();
 return 0;

}