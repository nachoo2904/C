#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// inicialización de vectores (de cadenas) Este vector tiene 5 cadenas de 10 caracteres
int main()
{
     char cad[][11]={"Hola","como","estas","yo","bien"};
     int x,y;
     system("cls");
    
     for (x=0;x<5;x++)  // tiene 5 cadenas
     printf("%s \n", cad[x]);
     system("pause");
     }
