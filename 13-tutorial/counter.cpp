/*
Un ejemplo más de distinguir el uso del constructor.
Clase que representa un contador
*/

#include <iostream>

using namespace std;

class counter
{
    private:
    int count;
    
    public:
    counter()                           //Constructor
    {
        count = 0;
    }
    
    void inc_count()                    // Incrementa el contador
    {
        count++;
    }
    
    int get_count()                     // Retorna el contador
    {
        return count;
    }
    
    
};


/*---------------------Programa principal-----------------------------*/

int main()
{
    counter c1, c2;                                             // Definición e inicialización
    cout << "\nC1 = " << c1.get_count() << endl;                // Mostrar en pantalla
    cout << "\nC2 = " << c2.get_count() << endl;
    c1.inc_count();                                             // incrementar c1
    c2.inc_count();                                             // incrementar c2
    c2.inc_count();                                             // incrementar c2
    cout << "\nC1 = " << c1.get_count() << endl;                // mostrar en pantalla de nuevo
    cout << "\nC2 = " << c2.get_count() << endl;
    return 0;
}













