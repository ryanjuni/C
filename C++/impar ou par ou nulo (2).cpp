#include <stdio.h>
int main ()
{
	int num,result;
	printf ("entre com o numero para ser verificado : \n");
	scanf ("%d",&num);
	
	if (num != 0)
	{
		result = num % 2;
		if (result ==0)
		printf ("\n %d %s ", num, "Este numero e par \n");
		else
		printf ("\n %d %s",num, " o numero e  impar \n");
	}
	else 
	printf ("\n %d %s", num, " o numero e nulo \n");
}
