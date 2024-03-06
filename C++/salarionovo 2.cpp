#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	float salario,reajuste, salarionovo;
	
	printf (" Entre com o o salario atual para calcular o reajuste : \n");
	scanf ("%f",&salario);
	if (salario <500)
	{
		reajuste = salario *0.15;
    }
    else if (salario >=500 && salario<=1000)
	{	
			reajuste = salario *0.10;
    }
    else
    {
    	reajuste = salario * 0.05;
	}
	salarionovo = salario + reajuste ;
	printf (" o valor do reajuste e : %.2f \n", reajuste);
	printf (" o valor do novo salario e : %.2f \n",salarionovo);
}
