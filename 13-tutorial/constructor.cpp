/*
Constructor

El siguiente ejemplo muestra dos maneras de dar valores a los elementos 
de datos en un objeto. A veces, sin embargo, es conveniente que un objeto 
pueda inicializarse cuando se crea por primera vez, sin la necesidad de 
hacer una llamada independiente a una función miembro.

La inicialización automática comienza usando un especial miembro de función
llamado "constructor". Un constructor es una función miembro (de la clase) que 
se ejecuta automáticamente cada vez que se crea un objeto.
*/

#include <string.h>
#include <iostream>

using namespace std;

class emp
{
    private:
    int eno;
    char name[10];
    float sal;
    
    public:
    emp(){;}                                        //Constructor sin argumentos
    
    emp(int teno, char tname[10], float tsal)        //Constructor con argumentos
    {
        eno = teno;
        strcpy(name, tname);
        sal = tsal;
    }
    
    void getData()
    {
        cin >> eno >> name >> sal;
    }
    void putData()
    {
        cout << eno << name << sal;
    }
};

//------------------------------------------------Programa principal-----------------------------------------

int main()
{
    emp e1(1001, "Magic", 6700.45);
    emp e2;
    e2.getData();
    e1.putData();
    e2.putData();
    return 0;
}






