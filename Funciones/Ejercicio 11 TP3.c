#include<stdio.h>
#include <stdlib.h>
int multiplo(int a);

main()
{
      int i, suma=0;
      
      for (i=1;i<=100;i++)
      {
          if(multiplo(i)==0)
          {
             suma=suma+i;
             printf("El numero %d es multiplo de 5 \n",i);
          }
      }
     
      printf("\n\n El total de la Suma es %d \n\n\n", suma);
      system("PAUSE");
}

int multiplo(int a)
{
    return (a%5);
}
