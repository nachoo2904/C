#include<stdio.h>
#include<stdlib.h>
/*TP4 ejercicio 22*/

main()
{ int antes, tot=0;
char ahora;
antes='z';
printf("Escribe una frase, para acabar un punto '.': \n");
fflush(stdin);
scanf("%c", &ahora);
while (ahora!='.') {

if (ahora=='a' && antes=='t') {tot ++;}
antes=ahora;
fflush(stdin);
scanf("%c", &ahora);

}
printf(" aparece %d veces '-ta-'", tot);
printf("\n\n");
system ("PAUSE");
}
