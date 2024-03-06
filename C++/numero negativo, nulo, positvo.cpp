#include <stdio.h>
int main ()
{
	int num;
	printf (" Entre com o  numero para ser vereficado : \n");
	scanf ("%d",&num);
	if (num == 0)
	printf ("\n numero nulo \n");
	else if (num > 0)
	printf ("\n numero positivo");
	else
	printf ("\n numero negativo \n");
	
}
