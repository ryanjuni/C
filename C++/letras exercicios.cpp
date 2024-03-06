#include <stdio.h>
int main()
{
	char letra1, letra2, letra3,letra4,letra5;
	printf ("digite a primeira letra : \n");
	scanf ("%c",&letra1);
	
	printf ("digite a segunda letra : \n");
	scanf ("%c",&letra2);
	fflush (stdin);
	
	printf (" digite a terceira  letra : \n");
	scanf ("%c",&letra3);
	fflush (stdin);
	
	printf (" digite a quarta letra : \n");
	scanf ("%c",&letra4);
	fflush (stdin);
	
	printf (" digite a quinta letra : \n");
	scanf ("%c",&letra5);
	fflush (stdin);
	
	printf ("\n");
	printf (" a primeira letra digitada foi = %c. \n",letra1);
	printf (" a primeira letra digitada foi = %c. \n",letra2);
	printf (" a primeira letra digitada foi = %c. \n",letra3);
	printf (" a primeira letra digitada foi = %c. \n",letra4);
	printf (" a primeira letra digitada foi = %c. \n \n \n",letra5);
	printf (" Todas as letras na mesma linha e na mesma ordem em que foram digitadas  =  %c %c %c %c %c \n \n \n",letra1, letra2,letra3,letra4,letra5);
	return 0;
}
