#include <iostream>
using namespace std;

//9
//Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
//Ejemplo A: 5 10 20 8 25 13 35 -8 -5 20. Se listará Máximo 35.
//Ejemplo B: 5 10 20 8 55 13 55 -8 -5 20 Se listará Máximo 55.
//Ejemplo C: -15 -10 -20 -8 -25 -13 -55 -6 -55 -20. Se listará Máximo -6
//El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el máximo es un positivo.
//Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.

int main (){
    int N, max;

    for(int i=1; i<11 ; i++){
        cout << "ingrese un numero" << endl;
        cin >> N;
        if(i== 1){
            max= N;
        } else if( N > max){
        max = N;
        }
    }
    cout << "maximo: " << max;
    return 0;
}
