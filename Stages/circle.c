/* Circle.c: calculates the area of a circle.
  Sample for showing stages of compilation
*/

#define PI 3.1416

main(){
    float area, radius;
    
    radius = 10;
    area = PI*(radius*radius);
    printf("Circle. ");
    printf("%s%f","Area of the circle with radius 10: ", area);
}



/*
1. Preprocessing stage is available in these two forms:

El preprocesado puede pedirse con cualquiera de los siguientes comandos; cpp alude específicamente al preprocesador. 
  $ gcc -E circulo.c > circulo.pp 
  $ cpp circulo.c > circulo.pp 
Examinando circulo.pp 
  $ more circulo.pp 
puede verse que la variable PI ha sido sustituída por su valor, 3.1416, tal como había sido fijado en la sentencia #define.

2. Compilación.
La compilación transforma el código C en el lenguaje ensamblador propio del procesador de nuestra máquina.
  $ gcc -S circulo.c 
realiza las dos primeras etapas creando el archivo circulo.s;  examinándolo con 
  $ more circulo.s 
puede verse el programa en lenguaje ensamblador.

3. Ensamblado.
El ensamblado transforma el programa escrito en lenguaje ensamblador a código objeto, un archivo binario en lenguaje de máquina ejecutable por el procesador.
El ensamblador se denomina as: 
  $ as -o circulo.o circulo.s 
crea el archivo en código objeto circulo.o a partir del archivo en lenguaje ensamblador circulo.s. No es frecuente realizar sólo el ensamblado; lo usual es realizar todas las etapas anteriores hasta obtener el código objeto así: 
  $ gcc -c circulo.c 
donde se crea el archivo circulo.o a partir de circulo.c. Puede verificarse el tipo de archivo usando el comando 
 $ file circulo.o 
  circulo.o: ELF 32-bit LSB relocatable, Intel 80386, version 1, not stripped

En los programas extensos, donde se escriben muchos archivos fuente en código C, es muy frecuente usar gcc o g++ con la opción -c para compilar cada archivo fuente por separado, y luego enlazar todos los módulos objeto creados. Estas operaciones se automatizan colocándolas en un archivo llamado makefile, interpretable por el comando make, quien se ocupa de realizar las actualizaciones mínimas necesarias toda vez que se modifica alguna porción de código en cualquiera de los archivos fuente.

4. Enlazado
Las funciones de C/C++ incluídas en nuestro código, tal como printf() en el ejemplo, se encuentran ya compiladas y ensambladas en bibliotecas existentes en el sistema. Es preciso incorporar de algún modo el código binario de estas funciones a nuestro ejecutable. En esto consiste la etapa de enlace, donde se reúnen uno o más módulos en código objeto con el código existente en las bibliotecas.
El enlazador se denomina ld. El comando para enlazar 
  $ ld -o circulo circulo.o -lc 
  ld: warning: cannot find entry symbol _start; defaulting to 08048184 
da este error por falta de referencias. Es necesario escribir algo como 
  $ ld -o circulo /usr/lib/gcc-lib/i386-linux/2.95.2/collect2 -m elf_i386 -dynamic-linker /lib/ld-linux.so.2 -o circulo /usr/lib/crt1.o /usr/lib/crti.o /usr/lib/gcc-lib/i386-linux/2.95.2/crtbegin.o -L/usr/lib/gcc-lib/i386-linux/2.95.2 circulo.o -lgcc -lc -lgcc /usr/lib/gcc-lib/i386-linux/2.95.2/crtend.o /usr/lib/crtn.o 
para obtener un ejecutable.

El uso directo del enlazador ld es muy poco frecuente. En su lugar suele proveerse a gcc los códigos objeto directamente: 
  $ gcc -o circulo circulo.o 
crea el ejecutable circulo, que invocado por su nombre 
  $ ./circulo 
  Circulo. 
  Area de circulo radio 10: 314.160004 
da el resultado mostrado.

Todo en un solo paso.
En programa con un único archivo fuente todo el proceso anterior puede hacerse en un solo paso: 
  $ gcc -o circulo circulo.c 
No se crea el archivo circulo.o; el código objeto intermedio se crea y destruye sin verlo el operador, pero el programa ejecutable aparece allí y funciona.
Es instructivo usar la opción -v de gcc para obtener un informe detallado de todos los pasos de compilación: 
  $ gcc -v -o circulo circulo.c


https://www.linux-party.com/index.php/6162-tutorial-de-c-entrega-n-1

*/