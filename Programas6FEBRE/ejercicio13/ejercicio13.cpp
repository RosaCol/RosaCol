
#include <iostream>
using namespace std;
int main ()
{

float suma = 0;
float nota = 0;
float contar = 0;

do{
cin>>nota;
if (nota>0){
suma = nota + suma;
contar = contar + 1;
}
}
while(cin);

cout<<"Nota media es: "<<(suma/contar)<<endl;


return 0;
}
