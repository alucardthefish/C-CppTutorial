/**/

#include <stdio.h>

//Función que imprime en consola atributos de un contacto
void address()
{
    printf("\nName of the Person");
    printf("\nStreet, Apartment//House No. ");
    printf("\nzip, City");
    printf("\nCountry");
}

// Declaraciones
void margenes(char flag[], char title[]);
int abs(int n);
int factorial(int x);
int rec_factorial(int x);

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
    
    address();
    address();
    
    margenes("header", "Valor absoluto");
    printf("El valor absoluto del numero: -43 es: \n");
    int res = abs(-43);
    printf("abs(-43) = %d\n", res);
    margenes("fin", "Valor absoluto");
    
    margenes("header", "factorial");
    int z, fact;
    printf("\nIngresa cualquier numero entero "); scanf("%d", &z);
    fact = factorial(z);
    printf("\nEl Factorial de %d es = %d", z, fact);
    margenes("fin", "factorial");
    
    margenes("header", "rec_factorial");
    int zrec, recfact;
    printf("\nIngresa cualquier numero entero "); scanf("%d", &zrec);
    recfact = rec_factorial(zrec);
    printf("\nEl Factorial de %d es = %d", zrec, recfact);
    margenes("fin", "rec_factorial");
    
    return 0;
}

// Funcion para poner un encabezado y pie pagina en consola
void margenes(char flag[], char title[])
{
    if(flag == "header"){
        printf("\n-------------------------Inicio-prueba:-%s-------------------------\n\n",title);
    }
    else{
        printf("\n-------------------------Final--prueba:-%s-------------------------\n\n",title);
    }
}

// Funcion que devuelve el valor absoluto de un numero
int abs(int n)
{
    if(n < 0){
        n = n * -1;
    }
    return n;
}

// Funcion que calcula el numero de factorial de un numero x dado
int factorial(int x)
{
    int f = 1, i;
    for(i = x; i >=1; i--)
    {
        f = f*i;
    }
    return f;
}

// Funcion que tambien calcula el numero factorial de un numero pero de manera recursiva
int rec_factorial(int x)
{
    int f;
    if(x>1){
        f = x * rec_factorial(x-1);
    }
    if(x==1){
        f=1;
    }
    else {
        return f;
    }
}




