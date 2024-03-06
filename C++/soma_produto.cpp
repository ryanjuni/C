#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num1,num2,num3,soma,produto;
	printf (" Digite o primeiro numero : \n");
	scanf ("%d",&num2);
	printf (" Digite o terceiro numero Digitados : %d, %d, %df = %.d. \n \n ",num1, num2,num3, produto);
	getchar ();
	return 0;
}
