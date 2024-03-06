#include <stdio.h>
int main()
{
	int num;
	printf (" entre com o numero para ser verificado : \n");
	scanf ("%d",&num);
	
	if (num == 0)
	  printf ("nulo");
	else if (num % 2 == 0)
	  printf ("par");
	 else
	  printf ("impar");
}
