#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL," Portuguese");
	float distancia, volumeComb, consumo;
	
	printf("entre com a distancia total percorrida \n");
	scanf ("%f", &distancia );
	
	printf ("Entre com  o volume de combustivel consumido \n");
	scanf ("%f",&volumeComb);
	
	consumo =distancia /volumeComb;
	printf ("o Consumo  medio do Automovel e : %.2f km/1\n", consumo);
}
