#include <stdio.h>
int main ()
{
	int num;
	printf ("Entre com os numeroos para serem vereficados :\n");
	scanf ("%d",&num);
	if (num ==0)
	{
		printf ("nulo");
	}
	else{
		if (num%2 ==0)
		printf ("par");
		else 
		printf ("impar");
	}
}
