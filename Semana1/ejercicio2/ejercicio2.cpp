#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int fa=0;
int d,a,i,b,c,f;
int e[100];


int main()
{
	for ( i = 0; i <d - 3; i++) 
{ 
    for ( c= i + 1; c <=d - 2; c++) 
    {           
        for ( b = c + 1; b <=d - 1; b++) 
        {
            for ( f = b + 1; f < d; f++) 
        
            if (e[i] + e[c] + e[b] + e[f] == a)
            if(fa ==0 ){
                cout << i+1<<", " << c+1  
                     << ", " << b+1 << ", " << f+1<<endl;
                     fa+=+1;
					 }
		}
	}  
} 

	int d=sizeof(e) / sizeof(e[0]);
{
	cout<<"\n Escribir el numero de elementos en el arreglo y el total de suma requerida: ";
	cin>>d>>a;
	cout<<"\n Escribit los elementos del arreglo: ";
	for(i=1;i<=d;i++)
	{
		cin>>e[i];

}
}
	if(fa==0)
	{
		cout<<"\n imposible";
	}
	return 0;
}

