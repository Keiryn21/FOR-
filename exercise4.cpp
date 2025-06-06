#include <iostream>
using namespace std;
int main(){

    //suma de n numeros//
    int n=0,suma=0;

    cout<<"por favor ingresa un numero"<<endl;
    cin>>n;

    for (int i = 0; i <=n; i++)
    {
        suma +=i;
    }
   cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;

    return 0;
}