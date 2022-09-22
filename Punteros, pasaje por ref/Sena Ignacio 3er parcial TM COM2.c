#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	int opcion;
	printf ("\t\t\t\t\tSeleccione una opcion.\n");
	printf ("\n1- Ingresar datos de la venta.\n");
	printf ("\n2- Generar informes del dia.\n");
	printf ("\n3- Salir.\n\n");
	fflush (stdin);
	scanf ("%d", &opcion);
	return opcion;
}

void carga (int* vec1, char* vec2, float*vec3, int*c, char*t, float*im, int i){
	
	*(vec1+i)=*c;
	*(vec2+i)=*t;
	*(vec3+i)=*im;
}

void infunc (int* vec1, char* vec2, float*vec3, int i){
	int y, contc=0, conta=0;
	float total, acumc=0, acuma=0;
		for (y=0; y<i; y++){
			if (*(vec2+y)=='a'){
				conta++;
				acuma=acuma+*(vec3+y);}
				else if (*(vec2+y)=='c'){
					contc++;
					acumc=acumc+*(vec3+y);}
}
	total= acumc+acuma;
	
	printf ("Cantidad total de curitas vendidas: %d.\nCantidad total de algodon vendido: %d.\n", conta, contc);
	printf ("Total facturado: $%.2f.\n", total);
	printf ("Total facturado de curitas: $%.2f.\n", acumc);
	
}

int main(int argc, char *argv[]) {
	int opc, cod, i=0, vec1[50];
	float importe, vec3[50];
	char tipo, vec2[50];
	
	opc=menu();
	while (opc!=3){
			switch (opc){
						case 1: printf ("Ingrese el codigo del articulo:\n");
								fflush (stdin);
								scanf ("%d", &cod);
								
								printf ("Ingrese si el tipo de articulo es algodon o curitas poniendo su caracter inicial:\n");
								fflush (stdin);
								scanf ("\n%c", &tipo);
								
								printf ("Ingrese el importe de la compra:\n");
								fflush (stdin);
								scanf ("%f", &importe);
								
								carga (vec1, vec2, vec3, &cod, &tipo, &importe, i);
								i++;
								
							opc=menu();
							break;
							
						case 2: infunc (vec1, vec2, vec3, i);
								opc=menu();
							break;
						
			}
	}
	
	return 0;
}
