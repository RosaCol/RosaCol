#include <iostream>
using namespace std;

int nu = 0;
int mayor = 0;

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Inserte un número diferente a 0 y mayor a -99"<<endl;
        cin>>nu;
        if (nu!= 0 && nu >-99 && nu > mayor)
        {
         mayor = nu;
        }
        if (nu== 0 || nu <-99)
            {
            cout<<"Numero no valido "<<endl;
            i= i-1;
            }
    }
return;   
}

int main(){
    ciclo ();
    cout<<"El numero mayor es "<< mayor<<endl;    
    return 0;
}
