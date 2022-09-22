#include <stdio.h>      
#include <stdlib.h>     
/*ejercicio 4 */
int main()
{
	float a,b,total;
printf("ingrese numero a\n");
fflush(stdin);
scanf("%f",&a);
printf("ingrese numero b\n");
fflush(stdin);
scanf("%f",&b);
total=(a+b)*(a-b);
printf("el resultado es:%f\n",total);

system("pause");

   }   
