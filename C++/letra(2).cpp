#include <stdio.h>
int main ()
{
	char letra1,letra2;
	printf (" Informe a primeira letra : \n");
	scanf ("%c%*c",&letra1);
	printf (" Informe a segunda letra :  \n ");
	scanf ("%c%*c",&letra2);
	printf (" Palavra = %c%c%c%c%c \n",letra1,letra2,letra1,letra2,letra1);
	getchar ();
	
	return 0;
	}
