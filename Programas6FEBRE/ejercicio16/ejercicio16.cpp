#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-50;
	int lim_sup =60;
	int m=0;
	int May=0;
	int com=0;

for(int i=0;i<100;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor<15)
	 m+=1;

	if(valor>50)
	May+=1;

	if(valor>25 && valor<45)
	com+=1;
	
}
     int valor=rand()%100;	

cout<<"Menores de 15 es: "<<m<<endl;
cout<<"Mayores de 50 es: "<<May<<endl;
cout<<"Comprendidos entre 25 y 45 es: "<<com<<endl;
return 0;
} 

