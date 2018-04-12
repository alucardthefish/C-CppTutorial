/*
Un destructor tiene el mismo nombre que el constructor (con el mismo
nombre que el de la clase), pero precedido de una tilde:
*/

//Ejemplo del uso de un destructor

#import <iostream>

using namespace std;

class temp
{
    private:
    int data;
    
    public:
    temp()
    {
        data = 0;
    }
    
    ~temp(){}
    
}

/*--------------------------------------Programa Principal--------------------------------------------*/

int main(){
    temp t;
    return 0;
}



















