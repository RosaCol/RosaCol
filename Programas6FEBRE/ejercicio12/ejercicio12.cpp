#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-10;
	int lim_sup =10;
	int su=0;
	float sui=0;
	int can=0;
	float ci=0;
	float M;

for(int i=0;i<10;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor%2==0){
	su+=valor;
		if(valor!=0){
		can+=1;
		}
	}	

	else{	
	sui+=valor;
		if(valor!=0){
		ci+=1;	
		}
}
		
M=(sui/ci);
}
     int valor=rand()%100;	
cout<<"Suma de pares: "<<su<<endl;
cout<<"Cantidad de numeros pares: "<<can<<endl;
cout<<"La media aritmetica de los impares es: "<<M<<endl;
return 0;
} 

