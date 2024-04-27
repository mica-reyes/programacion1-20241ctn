#include <iostream>
using namespace std;

//8
//Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.

int main (){
    int N;
    int positivos =0;
    int negativos = 0;
    int ceros = 0;
    const int cantidadIngresada = 10;

    for(int i =1 ; i <=cantidadIngresada; i++){
        cout << "ingrese un numero" << endl;
        cin >> N;
        if(N >0){
            positivos++;
        }else if(N < 0){
            negativos++;
        }else{
            ceros++;
        }
    }

    cout << "porcentaje positivos: " << (float)positivos * 100/cantidadIngresada << endl;
    cout << "porcentaje negativos: " << (float)negativos * 100/cantidadIngresada << endl;
    cout << "porcentaje ceros: " << (float)ceros * 100/cantidadIngresada << endl;
    
    return 0;
}
