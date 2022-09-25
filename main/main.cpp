#include <iostream>
#include <string>
#include "example.h"
#include "math.h"
using namespace std;

int main()
{
    int opcion;

    cout << "MENU" << endl;
    cout << "1) Pitagoras" << endl << "2) Contar raices de una ecuacion cuadratica" << endl << "3) Potencia" << endl;
    do
    {
        cout << "Ingrese una opcion (1,2 o 3): ";
        cin >> opcion;

    } while (opcion != 1 && opcion != 2 && opcion != 3); //le pide al usuario que ingrese una opcion hasta que sea valida

    switch (opcion)
    {
        case 1:
        {
            float cat1, cat2, hipotenusa;

            do
            {
                cout << "Ingrese el valor del primer cateto: ";
                cin >> cat1;

            } while (cat1 <= 0); //no tiene sentido ingresar un cateto nulo porque no seria un triangulo, ni uno negativo porque estamos hablando de longitud

            do
            {
                cout << "Ingrese el valor del segundo cateto: ";
                cin >> cat2;

            } while (cat2 <= 0);

            hipotenusa = Pitagoras(cat1, cat2); //no tiene sentido ingresar un cateto nulo porque no seria un triangulo, ni uno negativo porque estamos hablando de longitud
            
            cout << "La hipotenusa es: " << hipotenusa;
        }
        break;

        case 2:
        {
            int cant_raices;
            float a, b, c;

            do
            {
                cout << "Ingrese el valor de a: ";
                cin >> a;

            } while (a == 0); //a no puede ser nulo porque no seria una ecuacion cuadratica, sino una recta

            cout << "Ingrese el valor de b: ";
            cin >> b;

            cout << "Ingrese el valor de c: ";
            cin >> c;

            cant_raices = Bhaskara(a, b, c);

            cout << "La cantidad de raices reales es: " << cant_raices;
        }
        break;

        case 3:
        {
            int base;
            int exponente;
            float resultado;

            do
            {
                cout << "Ingrese la base: ";
                cin >> base;

                cout << "Ingrese el exponente: ";
                cin >> exponente;

            } while (base == 0 && exponente < 0); //para que no se realice una division por cero

            resultado = Potencia(base, exponente);

            cout << "El resultado de la operacion es: " << resultado;
        }
        break;
    }


    return 0;
}