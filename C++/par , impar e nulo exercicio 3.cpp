#include <stdio.h>
int main()
{
	int num;
	printf ("Entre com um numero para ser verificado : \n");
	scanf ("%d",&num);
	if (num!= 0)
	{
		if (num % 2 == 0)
		printf ("par");
		else 
		printf ("impar");
	}
	else 
	{
		printf ("nulo");
	}
}
