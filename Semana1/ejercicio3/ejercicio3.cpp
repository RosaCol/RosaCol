#include<iostream>

using namespace std;

int people(int r)
{
int i;	
int nd[r];	
	for(i=0;i<r;i++)
		cin>>nd[i];

return nd[i];
}

int main()
{
	int a, b, c;
cin>>a;
cin>>b;
cin>>c;
int r=people(a);
cout<<r<<endl;
	int soli[a]={people(a)};
	for(int i=0;i<a;i++)
	cout<<soli[a]<<" ";
return 0;
}
