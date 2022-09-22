#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 20 tp2 */
 main()
{	
   int c1=0, c2=0, c3=0, c4=0;  /* contadores inicializados en cero */
   float acu1=0, acu2=0, acu3=0, acu4=0; /* acumuladores inicializados en cero*/
   int nrofactura, nrovendedor;
   float montofactura;
   
   printf("Ingrese numero de factura\n");
   fflush(stdin);
   scanf ("%d", &nrofactura);  /* leo el numero de factura*/
   
   while (nrofactura!=0)
   {
   	printf("Ingrese numero de vendedor\n");
    fflush(stdin);
    scanf ("%d", &nrovendedor);
     
    printf("Ingrese monto de la factura\n");
    fflush(stdin);
    scanf ("%f", &montofactura);
     
    switch(nrovendedor)
    {
    case 1: c1=c1+1;
             acu1 = acu1 + montofactura;
             break;
    case 2: c2=c2+1;
             acu2 = acu2 + montofactura;
             break;     
    case 3: c3=c3+1;
            acu3 = acu3 + montofactura;
            break;
    case 4: c4=c4+1;
             acu4 = acu4 + montofactura;
             break;          
	}   /* del switch */
     
    printf("Ingrese numero de factura\n");
    fflush(stdin);
    scanf ("%d", &nrofactura);
     
   }  /* cierre del while*/
   
   
    printf("Cantidad de facturas v1 %d v2 %d v3 %d v4 %d\n", c1, c2, c3, c4);
    printf("Monto facturado v1 %.2f v2 %.2f v3 %.2f v4 %.2f\n", acu1, acu2, acu3, acu4);
    
    printf ("Total facturado %f\n", acu1+acu2+acu3+acu4);
    
	system("pause"); //Si la variable dia es =0 sale del ciclo de iteracion y hace una pausa esperando que el usuario oprima la tecla enter. 
	
}   
