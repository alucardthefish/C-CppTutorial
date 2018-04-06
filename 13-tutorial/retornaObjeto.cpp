/*
Devolver objetos de funciones

Hemos visto objetos que se pasan como argumentos a funciones, ahora vamos a
discutir sobre la forma de devolver los objetos de las funciones.
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

//-----------------------declaración de funciones------------------
emp getEmp();
void putEmp(emp t);

//-------------------------Programa principal-----------------

int main()
{
    emp e;
    e = getEmp();
    putEmp(e);
    return 0;
}


/* --------------------función--------------------------*/

emp getEmp()
{
    emp t;
    t.getData();
    return t;
}

void putEmp(emp t)
{
    t.putData();
}





















