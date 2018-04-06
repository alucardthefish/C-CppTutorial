/*
Array de objetos

El Compilador C++ también es compatible con gran variedad de objetos.
Siguiente ejemplo ilustra la ventaja de usar objetos utilizando matrices.

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

// ----------------------Programa principal------------------------
int main()
{
    emp e[10];
    for(int i = 0; i < 10; i++){
        e[i].getData();
    }
    for(int i = 0; i < 10; i++){
        e[i].putData();
    }
    return 0;
}


