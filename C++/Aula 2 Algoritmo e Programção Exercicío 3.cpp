#include <iostream>
using namespace std ;
int main()
{
  float Nota ;
  cout <<" Digite sua Nota:";
  cin>>Nota;
  if( Nota>= 60)
    {
      cout <<"Aprovado";
    }
    else if( Nota<60&&Nota>=48)
    {
	  cout<<"Recuperacao";
    }
    else
    {
	  cout <<"Reprovado";
    }
    
}

// Aprovado,Reprovado ou em Recuperação (exercicío)
