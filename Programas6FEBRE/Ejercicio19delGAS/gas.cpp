#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


int main()
{
srand(time(NULL));

int m1=0;
int m2=0;
int resultado = 0;
int lim_inf=50;
int lim_sup=150;


for(int i=0;i<2000;i++)
{

resultado= lim_inf+rand()% (lim_sup+1-lim_inf);

if (resultado<=100)
{
m1=m1+(resultado*(10*19));

}

if (resultado>100)

{ m2=m2+(resultado*(12*19);
}

cout<<"Valor random es:"<<resultado<<endl;
cout<<"Valor del combustible de 10 litros es:"<<m1<<endl;
cout<<"Valor del combustible de 12 litros es:"<<m2<<endl;


}
return 0;
}

