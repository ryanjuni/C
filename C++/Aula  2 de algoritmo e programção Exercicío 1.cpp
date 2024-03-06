#include <iostream>
#include <locale.h>
using namespace std;
int main()
{  
  setlocale(LC_ALL, "Portuguese");
   float Nota;
   cout<<"Digite sua Nota: ";
   cin>> Nota;
   if (Nota>= 60)
   {
   	 cout<< "Aprovado";
   }
  
} 

// Aprovado
