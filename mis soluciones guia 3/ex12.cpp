#include <iostream>
using namespace std;

//12
//Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
//Ejemplo: 5 8 12 2 -10 15 -20 8 -3 24. Máximo Negativo -3. Mínimo Positivo 2.

int main (){
    int num, min, max;
    bool positivos= false;
    bool negativos= false;

    for (int i= 1; i<=10; i++){
        cout << "ingresar un numero" << endl;
        cin >> num;
        if(num < 0 ){
            if(!negativos){
                negativos= true;
                max= num;
            }else if(num > max){
                max = num;
            }

        } else {
            if(!positivos){
                positivos= true;
                min = num;
            } else if(num<min){
                min= num;
            }
        }
    }
    cout << "maximo de los negativos: " << max << endl << "minimo de los positivos: " << min << endl;
    return 0;
}
