#include <iostream>
using namespace std;
int main(){
int Pa=0;
int In=0;
int i;

for(i=1; i<=200; i++){

        if (i%2==0){
        Pa= Pa + i;
        }
        else{
        In= In + i;
        }
}

cout<<"Los pares son: "<<Pa<<endl;
cout<<"Los impares son: "<<In<<endl;

return 0;

}
