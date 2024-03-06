#include <stdio.h>
#include <locale.h>
int main()
{
	int num1,num2,quociente,resto;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite o primeiro numero : \n");
	scanf ("%d%*c",&num2);
	quociente = num1 / num2;
	resto = (num1%num2);
	printf (" O quociente da divisão de %d",num1);
	printf ("por %d",num2);
	printf (" : %d \n\n",resto);
	getchar ();
	return 0;
}
