#include <iostream>
using namespace std;

int nu = 0;
int num = 0;
int su = 0;

void registro (){
    cin>>nu;
return;
}

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        registro();
        if (nu > num)
        {
            num = nu;
            su = num + su;
        }
        else
        {
            cout<<"La suma no se podrá hacer porque los números que ingresaste no están ordenados"<<endl;
            return;
        }        
    }
return;    
}

int main(){
    cout<<"Ingrese 10 números enteros"<<endl;
    ciclo();
    cout<<"La suma de sus números es: "<<su<<endl;
return 0;
}
