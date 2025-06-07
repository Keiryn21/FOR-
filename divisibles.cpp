#include <iostream>
using namespace std;
int main(){


    //numeros del 1 al 100 divisbles entre 3 y 5//

    

    for (int i = 1; i <=100; i++)
    {
        if (i%3==0 && i%5==0)
        {
            cout<<"los numeros divisibles entre 3 y 5 son : "<< i <<endl;
        }
        
    }
    
    return 0;
}