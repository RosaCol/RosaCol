#include <iostream>
using namespace std;
int main(){
   int div=1,divis =0,num=0;

         cout<<"Ingrese numero"<<endl;
         cin>>num;
for(divis=1;divis<(num+1);divis++){

         if(num%divis==0){
             div++;
            }
}

if(div!=2){
         cout<<"No es Primo"<<endl;;
}

else{
         cout<<"Es Primo"<<endl;
}
    return 0;
}
