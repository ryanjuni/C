#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int num,uni,dez,cen;
	printf ("digite o numero com 3 digitos : \n");
	scanf ("%d%*c",&num);
	uni = num % 10;
	cen = num /10;
	dez =( (num /10)%10);
	printf (" o numero  invertido e :");
	printf ("%d",uni);
	printf ("%d",cen);
	printf ("%d",dez);
	getchar ();
	return 0;
}
