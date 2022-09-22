#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 main()
{
     char  cadena[5]; int x;
     printf("ingrese cadena\n");
     gets(cadena);
     system("cls");

     
     /* Para imprimir de a una letra por renglon*/
     for(x=0;x<5;x++) printf("%c\n",cadena[x]);
     /* ó*/
     
     system("pause");
     }

