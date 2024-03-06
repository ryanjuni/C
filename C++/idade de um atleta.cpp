#include <stdio.h>
int main()
{
	int idade;
	printf("entre com a faixa de idade para ser verificado : \n");
	scanf ("%d",&idade);
	if (idade >= 5 && idade <=12)
	printf ("\n infantil \n");
	else if (idade >=13 && idade <=17)
	printf ("\n Juvenil \n");
	else if (idade >=18 && idade<=25 )
	printf ("\n  Profissional \n");
	else 
	printf ("\n Fora da faixa \n");
}
