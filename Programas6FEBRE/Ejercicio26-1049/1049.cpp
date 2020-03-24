//Ejercicio 1049 - Suma
#include<iostream>
using namespace std;

int main(){
	
	int n,suma = 0;
	cout<<"Digite el numero: "; cin>>n;
	
	for(int i=1;i<=n;i++){
		suma +=i;
	}
	cout<<"La suma es: "<<suma<<endl;
	return 0;
}
