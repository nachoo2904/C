#include<stdio.h>
#include<conio.h>
#define indice 10
/*TP4 ejercicio 5*/

main()
{
	int vec[indice], i, num, bandera=0;  // inicializo en cero
	
	for(i=0; i<indice; i++)
	{
		printf("Ingrese numero %d: ", i+1);
		scanf("%d", &vec[i]);
	}

	
	printf("Compare un valor con los anteriores\n");
	scanf("%d", &num);
	
	for(i=0; i<indice; i++)
	{
		if(vec[i]==num) {bandera=1;}  // agregu� que a bandera le asigno 1
		
	}
	if(bandera==1){
		printf("El numero %d se encuentra entre los anteriors\n", num);
	}else{printf("El numero %d NO se encuentra entre los anteriores\n", num); // agregu� cartel que no se encuentra
	}
	getch();
}
