#include<stdio.h>
#include <stdlib.h>
void edades(int , int );

main()
{
      int edad1, edad2;     
      printf("Ingrese la primer edad: ");
      scanf("%i",&edad1);
      printf("Ingrese la segunda edad: ");
      scanf("%i",&edad2);
      
      edades(edad1,edad2);
      system("PAUSE");
}
void edades(int ed1, int ed2)
{
     int diferencia;
     if (ed1>ed2)
     {
               diferencia=ed1-ed2;
               printf("\nLa edad mayor es %d y la diferencia es %d \n\n",ed1,diferencia);
     }
     else if (ed1<ed2)
     {
              diferencia=ed2-ed1;
              printf("\nLa edad mayor es %d y la diferencia es %d \n\n",ed2,diferencia);
     }
     else
     {
              printf("\nLas edades son iguales\n");
     }
}     
