/* Programa que busca el mayor de dos numeros */

#include <stdio.h>
int main()
{ 

 int a, b; /* Declaración de las variables. */
 printf("\nIntroducir valor para A: "); scanf("%d", &a); /* Lee valor de A */
 printf("\nIntroducir valor para B: "); scanf("%d", &b); /* Lee valor de B */ 
 if( a>b ) /* Comparamos ambos */
 printf("A es mayor");
 else
 printf("B es mayor");

 return 0;
} /* End */
