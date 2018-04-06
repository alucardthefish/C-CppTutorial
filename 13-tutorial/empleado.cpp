/*Programa que acepta y muestra informacion de los empleados*/

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
    emp e;
    e.getData();
    e.putData();
    return 0;
}



