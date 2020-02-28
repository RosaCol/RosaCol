#include <iostream>
using namespace std;
int main ()
{

   float preciounidades;
  float iva;
  float  bruto;
  float descuento;
  float total;

cin>>preciounidades;

iva=preciounidades/100*15;
bruto= iva + preciounidades;
descuento = bruto /100*5;
total= bruto - descuento;

if(bruto>=50000){
cout<<"Precio es:"<<total<<endl;
}
else
cout<<"Precio es:"<<bruto<<endl;

return 0;
}
