#include <iostream>
using namespace std;

int num = 0;

void contador (){
    for (int i = 0; i < 100; i++)
    {
        num = num + 1;
        cout<<num<<endl;
    }
return;   
}

int main(){
    cout<<"El contador"<<endl;
    contador();
return 0;
}
