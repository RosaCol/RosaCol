#include<iostream>
using namespace std;

int main(int argc, char*argv[])
{
	int i,  f=0, j=0, c=0; 
	char d[12];
	if(argc!=13){
	cout<<"error"<<endl;
	return 1;}
	else{
	for (i=1;i<13;i++){
	d[i-1]=argv[i][0];
	}
	}
for(i=0;i<=11;i++){
if(c==0){
	if(d[i]=='A')
	{
		if(f==0){
			cout<<"a";
			f=1;
	}
		else{
			cout<<"a";
			f=0;
			c=1;
	}
	}
	else if(d[i]=='B')
	{
		if(j==0){
			j=1;
			c=1;
			cout<<"a";
			}
		else{
			j=0;
			cout<<"b";
			}
	}
	else{
	cout<<"error";
	}
	}
else{
	if(d[i]=='A')
	{
		if(f==0){
			f=1;
			cout<<"a";
			}
		else{
			f=0;
			c=0;
			cout<<"b";
			}
	}
	else if(d[i]=='B')
	{	
	if(j==0){
		j=1;
		c=0;
		cout<<"b";
		}
	else{
		j=0;
		cout<<"b";
		}
	}
}
}
cout<<"   f=  "<<f<<"  j=  "<<j<<"  c=   "<<c<<endl;
return 0;
}