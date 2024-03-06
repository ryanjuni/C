#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"Portuguese");
	float num1,num2,num3,somaparcial;
	printf (" digite o primeiro numero : \n");
	scanf ("%f%*c",&num1);
	printf ("digite o segundo numero : \n");
	scanf ("%f%*c",&num2);
	printf ("digite o terceiro numero : \n");
	scanf ("%f%*c",&num3);
	somaparcial = 0.0;
	printf (" Soma parcial = %.2f \n",somaparcial);
	somaparcial = somaparcial + num1;
	printf (" Soma Parcial + %.2f = %.2f \n", num1,somaparcial);
	somaparcial = somaparcial + num2;
	printf (" Soma Parcial + %.2f = %.2f \n", num2, somaparcial);
	somaparcial = somaparcial + num3;
	printf (" Soma Parcial + %.2f = %.2f \n", num3, somaparcial);
	getchar ();
	return 0;
}
