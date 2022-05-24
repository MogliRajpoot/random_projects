#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a1[5],a2[5],a3[10],i,j,k;
	for(i=0;i<5;i++)
	{
		cout<<"Elements of 1st array"<<a1[i];
		cin>>a1[i];
	}
	for(j=0;j<5;j++)
	{
		cout<<"Elements of 2nd array"<<a2[j];
		cin>>a2[j];
	}
	i=0;j=0;k=0;
	while(i<5&&j<5)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			i++;
			k++;
		}
		else
		{
			a3[k]=a2[j];
			j++;
			k++;
		}
		
	}
}
