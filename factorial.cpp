#include <iostream>
using namespace std;
int main(){


    //factorial de un numero//

    int numero=0,factorial=1;

    cout<<"por favor ingresa un numero"<<endl;
    cin>>numero;

    for (int i = 1; i <=numero; ++i)
    {
         factorial *= i;
       
    }
    
     cout<<"el factorial de :"<< numero << "  es :"<< factorial <<endl;
    return 0;
}