#include <iostream>
using namespace std;
int main(){


    int numero=0;


    cout<<"por favor ingresa un numero"<<endl;
    cin>>numero;

    cout<<"tabla de: "<< numero <<endl;

    for (int i = 1; i <=10; i++)
    {
        cout<<numero<< "x"<< i << "=" << (numero*i)<<endl;
    }
    
    return 0;
}