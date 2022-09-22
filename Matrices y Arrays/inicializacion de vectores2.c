#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// inicialiación de matrices con valores
int main()
{
     int nros[][2]={11,12,21,22,31,32,41};  // arma por filas, son 4
     int x,y;
     system("cls");
  
     for (x=0;x<4;x++)
     {   for (y=0;y<2;y++)
         printf("  %d",nros[x][y]);
         printf("\n");
              }
     system("pause");
     }
