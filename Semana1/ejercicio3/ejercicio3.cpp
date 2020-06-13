#include <iostream>
#include <string>
using namespace std;

long* obt_z(long g){
long* z=new long[g];
for(int i=0;i<g;i++)
cin>>z[i];
return z;
}

long* obt_q(int x){
long* q=new long[x];
for(int i=0;i<x;i++)
cin>>q[i];
return q;
}

int obt_d(long* z,long* q,long g,int x,long k){
int d=0;
for(int i=0;i<x;i++){
for(long j=0;j<g;j++){
if((z[j]<=(q[i]+k))&&(z[j]>=(q[i]-k))){
d+=1;q[i]=0;}
}}

return d;

}

int main(){

int x;
long g,k;
cin>>g>>x>>k;
long* z=new long[g];
long* q=new long[x];
if(g>=1&&x<=200000&&(0<=k<=1000000000)){
z=obt_z(g);
q=obt_q(x);
int d=obt_d(z,q,g,x,k);
cout<<d<<endl;
}
return 0;

}
