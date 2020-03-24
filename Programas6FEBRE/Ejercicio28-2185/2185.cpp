#include<iostream>

using namespace std;

int ope(int k,int b)
{
long z,r,m,mod,d;
	z=k+b;
	r=k-b;
	m=k*b;
	d=k/b;
	mod=k%b;
cout<<z<<endl;
cout<<r<<endl;
cout<<m<<endl;
cout<<d<<endl;
cout<<mod<<endl;
return 0;
}
int main()
{
int k, b;
cin>>k;
cin>>b;
if(k>=1&&b<=50)
ope(k,b);
return 0;
}