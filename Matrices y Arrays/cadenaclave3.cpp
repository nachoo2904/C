#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// comprobar clave en clase hasta 3 intentos
int main()
{
     char clave[80];  // clave alfanumerica
     int x=0;
 
     system("cls");
     
     do {
         if ( x !=0)
         { printf ("Intente nuevamente\n");
           printf ("%d", x);
           }
           printf ("\nIngrese clave de acceso\n");
           gets(clave);
           x=x+1;
         } while (strcmp("entrar", clave) != 0 && x<3);
    
     if (strcmp("entrar", clave)==0) {printf ("Clave correcta, ingresa\n");}
         else {printf ("Ya ha intentado tres veces, no ingresa\n");}  
         
     system("pause");
     }
