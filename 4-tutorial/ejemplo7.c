/*
Programa que resuelve la suma de dos valores con mensajes de salida.
- Los mensajes son opcionales, pero hacen las aplicaciones una interacción más amigable.
- Compárelo con el último programa
*/

#include <stdio.h>

int main()
{
     int a, b, c;
     printf("Introduzca un valor para A "); scanf("%d", &a);
     printf("Introduzca un valor para B "); scanf("%d", &b);
     c = a + b;
     printf("\nLa Suma A+B es %d\n\n", c);
     return 0;
}



