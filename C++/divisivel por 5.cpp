#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"portuguese");
	int num;
	printf ("Entre com o numero para ser verificado : \n");
	scanf ("%d",&num);
	if (num==0)
	printf ("nulo");
	else if (num %5 == 0)
	printf ("esse numero e divisivel por 5");
	else 
	printf("esse numero  nao e divisivel por 5");
	return 0;
}
