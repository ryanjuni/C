#include <stdio.h>
#include <stdlib.h>
int main()
{
	float valA,valB,valC;
	printf ("Entre com o numero para serem divididos: \n");
	scanf ("%d",&valA);
	scanf ("%d",&valB);
	
	valC = (valA/valB);
	printf (" o valor da divisao eh:%.2f\n",valC);
	system ("pause");
	return (0);
	
}
