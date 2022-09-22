#include <stdio.h>
#include <conio.h>
void main()
{
    
	char nom[20];
    char ape[20];
    int edad;
    char tel[11];
    
    printf("ingrese su nombre:");
    fflush(stdin);
    gets(nom);
	//scanf("%s",nom);
    printf("\n Ingrese su apellido:");
    fflush(stdin);
	scanf("%s",ape);
    printf("\n Ingrese su edad:");
    fflush(stdin);
	scanf("%d", &edad);
    printf("\n Ingrese su telefono:");
    fflush(stdin);
	scanf("%s",tel);

    
    printf("\n Su nombre es: %s", nom);
    printf("\n El apellido es: %s", ape);
    printf("\n Su edad es: %d", edad);
    printf("\n Su numero de telefono es: %s", tel);
    getch();

}
