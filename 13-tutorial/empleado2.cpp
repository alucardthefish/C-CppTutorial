/*
Las funciones miembros (de la clase) esta definidas fuera de ella.

Existe la posibilidad de definir funciones miembros fuera de la
clase mediante el operador de resolución de ámbito: operator (::).
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
        void getData();
        
        void putData();
        
};

void emp::getData()
{
    cin >> eno >> name >> sal;
}

void emp::putData()
{
    cout << eno << name << sal;
}

// ----------------------Programa principal------------------------
int main()
{
    emp e;
    e.getData();
    e.putData();
    return 0;
}
