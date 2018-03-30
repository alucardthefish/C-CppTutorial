/**/

#include <stdio.h>

int main()
{
    int a = 10;
    
    printf("\n El valor de A es: %d", a);
    printf("\n La direccion de A es: %p\n", &a);
    
    int vari1 = 11;         /* variable var1 = 11 */
    int *ptr;           	/* Variable ptr as pointer to */

    ptr = &vari1;           /* Devuelve la dirección de var1 y la almacena en ptr */

    printf("El valor de vari1 es %d\n", *ptr);
    printf("La dirección que almacena ptr: %p\n", ptr);
    printf("La dirección de vari1: %p\n", &vari1);
    
    return 0;
}




