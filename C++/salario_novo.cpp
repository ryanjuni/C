#include <stdio.h>
int main ()
{
	 float salario, reajuste, salarionovo;
	 printf ("Entre com o salario para calcular \n");
	 scanf ("%f",&salario);
	 reajuste = salario *0.10;
	 salarionovo = salario + reajuste;
	 printf (" o valor do reajuste e : %.2f \n",reajuste);
	 printf (" o salario novo e : %.2f \n",salarionovo);
	 
}

