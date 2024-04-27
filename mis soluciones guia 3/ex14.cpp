#include <iostream>
using namespace std;

//14
//Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
//Ejemplo 8 4 -5 7 9 18 5 se informa:
//Primer impar: -5,
//Segundo impar: 7,
//Anteúltimo impar: 9
//Último impar: 5.

int main(){
    int num, primero, segundo, anteultimo, ultimo;
    bool bp= false;
    bool bs= false;

    for(int i=0; i<7; i++){
        cout << "ingrese un número" << endl;
        cin >> num;
        if(num%2!=0){
            if(!bp){
                primero = num;
                bp= true;
            } else if(!bs){
                segundo= num;
                bs=true;
                } else {
                    anteultimo= ultimo;
                    ultimo = num;}
                }
    }
    cout << "primer impar: " << primero << endl;
    cout << "segundo impar: " << segundo<< endl;
    cout << "anteultimo impar: " << anteultimo << endl;
    cout << "ultimo impar: " << ultimo <<endl;
    return 0;
}
