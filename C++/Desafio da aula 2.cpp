#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
   { 
	  int h=0, s=0, m=0,h1=0,m1=0,s1=0;
	  cout<<" Entre com o formato de Tempo HH:MM:SS\n\n ";
      cin  >>h>>m>>s;  
      cout<< "definir alarme em HH:MM:SS\n\n";
      cin >>h1>>m1>>s1;
      if (h<24 && m<60 && s<60)
      {
     start:
      for(h;h<24;h++)
           {
        	for(m;m<60;m++)
	        {
	    	    for(s;s<60;s++)
	        	{  
				
				 for(double i=0; i<9999999; i++) 
				 {
				 	i++;
				 	i--;
					 }
				 }
			      system ("CLS");
	    		   cout<<h<<" : "<<m<<" : "<<s;				 	
				 		if (h<24)
					   {
					 	cout<<"\t Manha";
					   }
					    else
					     {
					      	cout<<"\t Noite";
					     }
					       if( h==h1 && m==m1 && s==s1)
 	 		               
				           {
				            cout<<"\a\a\a\a\a\a\a\a\a\a"; 
				         }
 	 		  s=0;
			}
			m=0;
		}
		h=0;
     goto start;
     }
     else
     {
     cout<<" Entre com um formato Correto em HH:MM:SS\n";
	 } 
   }
 // projeto de Relógio Digital # Desafio 	
