#include <iostream>
using namespace std;

//4
//Hacer un programa para que el usuario ingrese un número positivo y luego se muestren 
//por pantalla los números entre el 1 y el número ingresado por el usuario. 
//Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.

int main (){
    int n, i;
    cout << "ingrese un numero" << endl;
    cin >> n;
    cout << "----- numeros entre el 1 y el " << n << " -------" << endl;

    for(i= 2; i< n; i++){
        cout << i << endl;
    }
    return 0;
}
