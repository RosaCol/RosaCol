#include<iostream>
using namespace std;


int main()
{
float media=0;
int numero=0;
int i;

for(i=1; i<=50;i++)
{
numero= numero + i;
}
media= numero/50;

cout<<"La media es:"<<media<<endl;
return 0;
}
