#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"portuguese");
	int valA, valB, valsoma,valsubtrai;
	printf ("entre com o valores para serem somados e subtraidos \n");
	scanf ("%d",&valA);
	scanf ("%d",&valB);
	valsoma = valA + valB;
	valsubtrai = valA - valB;
	printf ("o valor da soma é : %d \n",valsoma);
	printf ("o valor da subtracao é : %d \n",valsubtrai);

}
