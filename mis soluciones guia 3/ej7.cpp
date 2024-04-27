#include <iostream>
using namespace std;

//7
//Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, 
//cuántos son negativos, y cuántos iguales a cero.
//Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.


int main (){
    int N;
    int positivos =0;
    int negativos = 0;
    int ceros = 0;

    for(int i =1 ; i <11; i++){
        cout << "ingrese un numero" << endl;
        cin >> N;
        if(N >0){
            positivos++;
        }else if(N < 0){
        negativos++;
        }else{ ceros++;
        }
    }

    cout << "positivos: " << positivos << endl;
    cout << "negativos: " << negativos << endl;
    cout << "ceros: " << ceros << endl;
    return 0;
}
