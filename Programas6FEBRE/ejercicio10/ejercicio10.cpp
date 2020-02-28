#include <iostream>
using namespace std;

int num = 0;
int mul = 0;
int tmp = 1;
int i;

void ingreso (){
    cin>>num;
return;
}

void ciclo (){
    ingreso();
    cout<<"Los múltiplos son:"<<endl;
    for (i = 0; i < num; i++)
    {
        mul = 4 * tmp++;
        cout<<mul<<endl;
    }
return;
}

int main(){
    cout<<"Ingrese la cantidad de múltiplos de 4 que desee"<<endl;
    ciclo();
return 0;
}
