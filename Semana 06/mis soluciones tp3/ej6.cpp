#include <iostream>
using namespace std;

//6
//Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números.
//Se pide informar cuantos son positivos
//Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
//Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0

int main (){
    int N, num;
    int positivo = 0;

    cout << "cantidad de numeros a ingresar" << endl;
    cin >> N;
    for (int i = 1 ; i<= N; i++){
        cout << "ingrese un numero " << endl;
        cin >> num;
        if( num >0){
            positivo ++;
        }
    }
    cout << "Cantidad de positivos: " << positivo;
    return 0;
}
