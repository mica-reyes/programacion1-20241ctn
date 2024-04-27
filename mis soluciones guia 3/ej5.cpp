#include <iostream>
using namespace std;

//5
//Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. 
//Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el usuario ingresa 25 y 8, 
//se mostrarán los números entre el 8 y el 25.

int main ()
{

    int n1, n2, i, f, x;
    cout << "ingrese un numero" << endl;
    cin >> n1;
    cout << "ingrese otro" << endl;
    cin >> n2;
    cout << "-----------" << endl;

    if(n1<n2)
    {
        i= n1+1;
        f= n2;
    }
    else
    {
        i=n2 +1;
        f= n1;
    }
    for(x=i; x< f; x++)
    {
        cout<< x << endl;
    }
    return 0;
}
