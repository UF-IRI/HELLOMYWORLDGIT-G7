#include "gmock/gmock.h"
#include "example.h"

using namespace testing;

TEST(TareaDomingo, pitagoras)
{
	ASSERT_THAT(Pitagoras(3,4), 5);
	ASSERT_THAT(Pitagoras(0, 0), 0);//si bien pasa el test, ingresar catetos nulos  representa un error logico que contemplamos en el main al pedir los datos
	ASSERT_THAT(Pitagoras(-3, -4), 5); //si bien pasa el test, ingresar catetos negativos representa un error logico que contemplamos en el main al pedir los datos
	//ASSERT_THAT(Pitagoras(a,b),error) si se ingresa otro tipo de variable tendria que dar error pero no sabemos como testear ese caso
	ASSERT_THAT(Pitagoras(30, 40), 50);
}

TEST(TareaDomingo, potencia)
{
	ASSERT_THAT(Potencia(1, 2), 1);
	ASSERT_THAT(Potencia(-2, 3), -8);
	ASSERT_THAT(Potencia(0, 0), 1);
	ASSERT_THAT(Potencia(2, -1), 0.5); 
	//ASSERT_THAT(Potencia(0,-1),error); //tendria que dar error porque representa una division por cero pero no sabemos como predecir que va a dar error
	ASSERT_THAT(Potencia(4, -1), 0.25);
	ASSERT_THAT(Potencia(5, -2), 0.04);
}

TEST(TareaDomingo, resolvente)
{
	ASSERT_THAT(Bhaskara(2, 3, 0), 2);
	ASSERT_THAT(Bhaskara(1, 2, 1), 1);
	ASSERT_THAT(Bhaskara(1, 0, 1), 0);
	ASSERT_THAT(Bhaskara(0, -3, -8), 1); //la funcion va a devolver un 2 pero con el coeficiente principal nulo tendria que devolver un 1 porque representaria la ecuacion de una recta
										 //por eso en el main restringimos el ingreso de un valor nulo para a(no seria una funcion cuadratica)
}

