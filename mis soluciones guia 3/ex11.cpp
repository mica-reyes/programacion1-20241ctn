#include <iostream>
using namespace std;

// 11
//Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
//Ejemplo A: 10 20 -5 30-15 5 42 0 22 -13. Se listará Máximo 42 Mínimo -15.
//Ejemplo B: 10 20 5 30 15 5 42 8 22 13. Se listará Máximo 42 Mínimo 5.
//Ejemplo C: -10 -20 -5 -30 -15 -12 -42 -8 -22 -13. Se listará Máximo -5 Mínimo -42.
//Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente”
//es un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.

int main ()
{
    int max, min, num;

    for(int i=1; i<=10; i++)
    {
        cout << "ingrese un número" << endl;
        cin >> num;
        if(i== 1)
        {
            max= num;
            min= num;
        }
        else
        {
            if(num>max)
            {
                max= num;
            }
            else if(num<min)
            {
                min = num;
            }
        }
    }
    cout << "Maximo: " << max << endl << "Minimo: " << min << endl ;
    return 0;
}
