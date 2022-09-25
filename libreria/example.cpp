#include "example.h"
#include <iostream>
#include "math.h"
using namespace std;


float Pitagoras(float cateto1, float cateto2) //la funcion recibe 2 catetos ingresados por el usuario y devuelve la hipotenusa
{
    float hipotenusa = sqrt((pow(cateto1, 2)) + (pow(cateto2, 2)));

    return hipotenusa;
}

float Potencia(int base, int exponente) //la funcion recibe los valores de la base y el exponente y realiza la potencia
{
    float resultado = pow(base, exponente);

    return resultado;
}

int Bhaskara(float a, float b, float c) //la funcion recibe los 3 coeficientes de una ecuacion cuadratica y segun el valor del determinante devuelve la cantidad de raices reales 
{
    int cantidad_raices;

    if ((pow(b, 2) - (4 * a * c)) > 0)
        cantidad_raices = 2;
    else
    {
        if ((pow(b, 2) - (4 * a * c)) == 0)
            cantidad_raices = 1;
        else
        {
             if ((pow(b, 2) - (4 * a * c)) < 0)
                cantidad_raices = 0;
        }
    }

    return cantidad_raices;
        
}