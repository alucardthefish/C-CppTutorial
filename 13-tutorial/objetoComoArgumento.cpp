/*
Objetos como argumentos

Pasar objetos a funciones es similar a pasar estructuras o matrices a
funciones. 
El siguiente programa muestra cómo los objetos se pasan a funciones.
*/

#include <iostream>

using namespace std;

class emp
{
    private:
        int eno;
        char name[10];
        float sal;
    
    public:
        void getData()
        {
            cin >> eno >> name >> sal;
        }
        
        void putData()
        {
            cout << eno << name << sal;
        }
        
};

void operate(emp t);

//-------------------------Programa principal-----------------

int main()
{
    emp e;
    operate(e);
    return 0;
}


/* --------------------función--------------------------*/
void operate(emp t)
{
    t.getData();
    t.putData();
}





