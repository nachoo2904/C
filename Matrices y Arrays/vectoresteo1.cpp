#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Ej para clase de teoria 
int main()
{
     int enteros[10];
     
     int i;
     
     system("cls");
  
    for (i=0;i<10;i++)
        {
        enteros[i]=i; // Asigno el valor i a cada elemento del vector
        
        // Si quiero leer los valores
        //printf("Ingrese valor en posición  %d\n",i);
		//scanf("%d", &enteros[i]);
		}	
     
    for (i=0;i<10;i++)
      
         printf("Valor de posicion %d del vector: %d\n",i, enteros[i]);
     
    system("pause");
}
