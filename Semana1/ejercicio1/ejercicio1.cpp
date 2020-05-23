#include<iostream>
using namespace std;

int main(){
	int numero=0;
	cout<<"Introduce un numero: "; cin>>numero;
	
	if (numero>10000000){
	return numero;
	}
	 while(numero>1){
	 	cout<<numero<<" ";
	 	if (numero%2==0)
	 	{
	 		numero=(numero/2);
		 }
		 else 
	 	{
	 		numero=(numero*3+1);
		 }
	 }
	 cout<<" "<<numero;
	return 0;
}
