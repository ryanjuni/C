#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	float salbase,salreceber,grat,imp;
	scanf ("%f",&salbase);
	grat = salbase *5/100;
	salreceber= 10.0;
	imp = salreceber *7/100;
	salreceber = salreceber - imp;
	printf ("%.2f \n",salreceber);
}
