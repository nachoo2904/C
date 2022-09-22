#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     char cad[5][11];  // 5 cadenas de 10 caracteres
     int x,y;
     system("cls");
     for (x=0;x<5;x++)
     {
         printf("Ingrese cadena numero: %d\n",x+1);
         gets(cad[x]);
         }
     for (x=0;x<5;x++)
     printf("%s \n", cad[x]);
     system("pause");
     }
