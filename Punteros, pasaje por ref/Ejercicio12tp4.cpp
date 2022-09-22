#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Ej para clase del 20/10 Lo hacemos sin vector de nombres
int main()
{
     int nro[50]={0};  // nro de vendedor
     
     float monto [50]={0};  // monto de la venta
     
     int i=0, j, k;  // Variable i es el primer elemento disponible de los vectores
     float montovend;
     char respuesta;
     
     printf ("Desea ingresar ventas S/N\n");
     fflush(stdin);
     scanf("%c", &respuesta);
     
    while (respuesta=='S')
    {
    	 printf ("Ingrese numero de vendedor\n");
         fflush(stdin);
    	 scanf("%d", &nro[i]);
    	
    	 printf ("Ingrese monto del vendedor\n");
         fflush(stdin);
    	 scanf("%f", &monto[i]);
    	 
    	 // Incremento i para tener posición del primero disponible
    	 i++;
    	 	
    printf ("Desea ingresar ventas S/N\n");
    fflush(stdin);
    scanf("%c", &respuesta);
	}
	
	
	for (k=0;k<25;k++)  // numero de 0 a 24 los vendedores
	{
	montovend=0;
	
      for (j=0;j<i;j++)  
        {
        	if (nro[j]==k) montovend=montovend+monto[j];
		}
		
	printf("Monto vendedor %d es %f\n", k, montovend);	
	}
     
  
    system("pause");
}
