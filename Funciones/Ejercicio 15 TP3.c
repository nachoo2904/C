#include<stdio.h>
#include<stdlib.h>
void calculos(int num);

main()
{
   
   int lado,resultado;
   printf("\nIngresar el valor del lado de un cuadrado: ");
   scanf("%d",&lado);
   calculos(lado);
}


void calculos(int num)
{ 
  int peri,super;   
  peri=num*4;   
  super=num*num;
  printf("\nEl Perimetro del Cuadrado es %d y la Superficie es %d \n",peri,super);
  system("PAUSE");
}
   
   
