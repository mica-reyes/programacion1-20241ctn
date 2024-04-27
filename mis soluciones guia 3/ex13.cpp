#include <iostream>
using namespace std;

//13
//Dada una lista de 10 números enteros informar cual es el máximo de los pares.
//Ejemplo A: 2 10 20 8 25 13 36 - 8 -5 20 se informa máximo: 36
//Ejemplo B 5 -13 23 81 -55 -13 55 4 15 -20 Se informa máximo: 4
//Ejemplo C: -5 -13 -20 -8 -55 -13 -55 -14 -15 -20 se informa máximo: -8

int main (){
    int num, max;
    bool bp= false;
    for (int i=0; i<10; i++){
        cout << "ingrese un numero"<< endl;
        cin >> num;
        if(num%2==0 && !bp){
            max= num;
            bp= true;
        } else if(num%2==0 && num>max){
            max= num;
        }
    }
    cout << "el maximo de los pares es: " << max<< endl;
    return 0;
}
