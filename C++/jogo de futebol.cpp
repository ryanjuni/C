#include <stdio.h>
#include <locale.h>
int main () 
{
	setlocale(LC_ALL, "Portuguese");
	char time1 [20], time2 [20];
	int gol1, gol2;
	printf ("Entre com o nome do primeiro time e a quantidade de gols respectivamente: \n");
	scanf ("%s",&time1);
	scanf ("%d",&gol1);
	printf ("Entre com o nome do primeiro time e a quantidade de gols respectivamente: \n");
	scanf ("%s",&time2);
	scanf ("%d",&gol2);
	if (gol1>gol2)
	printf ("\n o time vencedor e %s \n",time1);
	else if (gol2 >gol1)
	printf ("\n time vencedor e %s \n",time2);
	else
	printf ("\n Os times empataram");
	return 0;
	
}
