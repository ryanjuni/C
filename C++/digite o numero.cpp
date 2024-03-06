#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL,"Poetuguese" );
	float num1,num2,num3,num4,num5,soma,media;
	printf ("Digite o primerio numero : \n");
	scanf ("%f",&num1);
	printf ("Digite o segundo numero : \n");
	scanf ("%f",&num2);
	printf ("Digite o terceiro numero : \n");
	scanf ("%f",&num3);
	printf ("Digite o quarto numero : \n");
	scanf ("%f",&num4);
	printf ("Digite o quinto numero : \n");
	scanf ("%f",&num5);
	soma = num1 + num2 + num3 + num4 + num5;
	media = soma/5;
	printf ("\n o valor da soma dos numeros digitados : %.2f, %.2f,%.2f,%.2f,%.2f = %.2f.\n\n",num1,num2,num3,num4,num5,media);
	getchar ();
	return 0;
}
