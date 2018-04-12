/*
Sobrecarga de un constructor

La capacidad para la clase relacionada de tener funciones con el mismo
nombre, pero diferente contenido. El procedimiento a utilizar se 
determina en tiempo de ejecución por la clase del objeto.
*/

#include <iostream>

using namespace std;

class ttime
{
    private:
    int hh, mm, ss;
    
    public:
    
    // Constructor con inicialización
    ttime()
    {
        hh = 0;
        mm = 0;
        ss = 0;
    }
    
    
    // Constructor con 3 argumentos
    ttime(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    
    // Constructor con 2 argumentos
    ttime(int h, int m)
    {
        hh = h;
        mm = m;
    }
    
    // Constructor con 1 argumento
    ttime(int h)
    {
        hh = h;
    }
    
    // Destructor
    ~ttime(){}
    
    void get_time()
    {
        cin >> hh >> mm >> ss;
    }
    
    void put_time()
    {
        cout << endl << hh << " " << mm << " " << ss;
    }
};

/*------------------------------Programa Principal---------------------------------------------*/

int main(){
    // Llamando constructores
    ttime t1, t2(12, 12, 12), t3(4, 5), t4(11);
    
    t1.get_time();
    t1.put_time();
    t2.put_time();
    t3.put_time();
    t4.put_time();
    
    return 0;
}














