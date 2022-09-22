/*TP3 Ejercicio 6*/
#include <stdio.h>
int negativo(int x);

main(){
	
	int numero;
	
	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d", &numero);
		
	if(negativo(numero)==1){
		printf("El numero es negativo");
	} else{
		printf("El numero es positivo");
	}
}

int negativo(int x){
	
	if(x<0){
			return 1;
	} else{
			return 0;
	}
}
