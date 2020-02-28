#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int Su;
	int Mu;
        int i;

for(i=20;i<=400;i+=2){
	Su= Su + i;
	Mu= Mu + i;
}

cout<<"Suma es: "<<Su<<endl;
cout<<"Producto es: "<<Mu<<endl;
return 0;

}
