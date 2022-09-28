#include "gmock/gmock.h"
#include "tarea2709.h"

using namespace testing;

TEST(Pitagoras, CasosPosibles)
{
	ASSERT_THAT(Pitagoras(3.0,4.0), 5.0);
	ASSERT_THAT(Pitagoras(30.0, 40.0), 50.0);
	ASSERT_THAT(Pitagoras(8.0,6.0 ),10.0 );

}
TEST(Pitagoras, CasosBorde)
{
	ASSERT_THAT(Pitagoras(0.0, 0.0), -1);//catetos nulos-->error
	ASSERT_THAT(Pitagoras(-3.7, -4.2), -1);//catetos negativos-->error
	ASSERT_THAT(Pitagoras(-1.7, -1.1), -1);
	//ASSERT_THAT(Pitagoras(a,b),error) si se ingresa otro tipo de variable tendria que dar error pero no sabemos como testear ese caso
}


TEST(Potencia, ExponentePositivo)
{
	ASSERT_THAT(Potencia(1, 2), 1.0);
	ASSERT_THAT(Potencia(0, 0), 1.0);
	ASSERT_THAT(Potencia(3, 2), 9.0);
	ASSERT_THAT(Potencia(2, 3), 8.0);
}

TEST(Potencia, ExponenteNegativo)
{
	ASSERT_THAT(Potencia(-2, 3), -8.0);
	ASSERT_THAT(Potencia(2, -1), 0.5);
	ASSERT_THAT(Potencia(0,-1),-1); //base=0 y exponente negativo -->division por cero, error
	ASSERT_THAT(Potencia(4, -1), 0.25);
	ASSERT_THAT(Potencia(5, -2), 0.04);
}


TEST(Bhaskara, CasosPosibles)
{
	ASSERT_THAT(Bhaskara(2.0, 3.0, 0.0), 2);
	ASSERT_THAT(Bhaskara(1.3, 2.1, 1.3), 0);
	ASSERT_THAT(Bhaskara(1.4, 0.0, 1.1), 0);
}

TEST(Bhaskara, CasosBorde)
{
	ASSERT_THAT(Bhaskara(0.0, -3.2, -8.7), -1); //coeficiente principal nulo-->error
	ASSERT_THAT(Bhaskara(0.0, -1.1, 2.2), -1); 
	ASSERT_THAT(Bhaskara(0.0, 0.0, -5.4), -1); 
	ASSERT_THAT(Bhaskara(0.0, 0.0, 0.0), -1);
}

